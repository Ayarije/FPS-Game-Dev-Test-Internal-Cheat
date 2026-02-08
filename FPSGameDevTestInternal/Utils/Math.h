#include "../SDK/SDK.h"
#include <cmath>

#define M_PI 3.14159265358979323846

struct FVector2D { float X, Y; };

namespace Math {
    // Convertit une rotation (Unreal Rotator) en vecteurs de direction
    void GetAxes(FRotator R, FVector& X, FVector& Y, FVector& Z) {
        // Formules mathématiques standards pour convertir Euler Angles -> Vecteurs Matrices
        // (Simplifié pour l'explication, implémentation standard UE4)
        float CP, SP, CY, SY, CR, SR;
        // Pitch, Yaw, Roll conversion en radians...
        // Note: Dans UE4, Pitch=Y, Yaw=Z, Roll=X généralement pour les inputs, mais ici on traite les données brutes.
        // Code standard Matrix :
        float RADS = M_PI / 180.0f;
        SP = sin(R.Pitch * RADS); CP = cos(R.Pitch * RADS);
        SY = sin(R.Yaw * RADS);   CY = cos(R.Yaw * RADS);
        SR = sin(R.Roll * RADS);  CR = cos(R.Roll * RADS);

        X.X = CP * CY; X.Y = CP * SY; X.Z = SP;
        Y.X = SR * SP * CY - CR * SY; Y.Y = SR * SP * SY + CR * CY; Y.Z = -SR * CP;
        Z.X = -(CR * SP * CY + SR * SY); Z.Y = CY * SR - CR * SP * SY; Z.Z = CR * CP;
    }

    FVector2D WorldToScreen(FVector WorldLocation, FVector CameraLocation, FRotator CameraRotation, float FOV) {
        FVector2D Screenlocation = { 0, 0 };

        // Récupérer les axes de la caméra
        FVector vAxisX, vAxisY, vAxisZ;
        GetAxes(CameraRotation, vAxisX, vAxisY, vAxisZ);

        // Calcul du Delta (Différence entre la cible et la caméra)
        FVector vDelta = { WorldLocation.X - CameraLocation.X, WorldLocation.Y - CameraLocation.Y, WorldLocation.Z - CameraLocation.Z };

        // Produit scalaire (Dot Product) pour projeter
        float vTransformed[3];
        vTransformed[0] = vDelta.X * vAxisY.X + vDelta.Y * vAxisY.Y + vDelta.Z * vAxisY.Z; // Y (Right)
        vTransformed[1] = vDelta.X * vAxisZ.X + vDelta.Y * vAxisZ.Y + vDelta.Z * vAxisZ.Z; // Z (Up)
        vTransformed[2] = vDelta.X * vAxisX.X + vDelta.Y * vAxisX.Y + vDelta.Z * vAxisX.Z; // X (Forward)

        // Si vTransformed[2] < 1.0f, l'ennemi est derrière nous
        if (vTransformed[2] < 1.0f) vTransformed[2] = 1.0f;

        // Projection perspective (FOV)
        // Note: Remplacez 1920/1080 par la résolution dynamique de votre fenêtre
        float ScreenCenterX = 1920.0f / 2.0f;
        float ScreenCenterY = 1080.0f / 2.0f;

        Screenlocation.X = ScreenCenterX + vTransformed[0] * (ScreenCenterX / tan(FOV * M_PI / 360.0f)) / vTransformed[2];
        Screenlocation.Y = ScreenCenterY - vTransformed[1] * (ScreenCenterX / tan(FOV * M_PI / 360.0f)) / vTransformed[2];

        return Screenlocation;
    }
}