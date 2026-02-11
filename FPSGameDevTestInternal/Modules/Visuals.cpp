#include "Visuals.h"

namespace visuals {
    ImU32 COLOR_ENEMY = IM_COL32(255, 0, 0, 255);
    ImU32 COLOR_TEAM = IM_COL32(0, 255, 0, 255);
    ImU32 COLOR_DEFAULT = IM_COL32(0, 0, 255, 255);

    bool CheckActorName(AActor* Actor) {
        // Search AActor's FName for "Character" or "Pawn"
        UObject_Stub* Obj = (UObject_Stub*)Actor;
        if (IsBadReadPtr((void*)Obj->VTable, 8)) return false;

        std::string Name = Obj->GetName();
        if (Name.find("Character") == std::string::npos && Name.find("Pawn") == std::string::npos) return false;

        return true;
    }

    bool CheckEnemy(AActor* Actor) {
        __try {
        // 1. Cast
        ABP_PlayerCharacter_C* Enemy = (ABP_PlayerCharacter_C*)Actor;

        // 2. Vérifications Pointeurs
        if (IsBadReadPtr(Enemy, 8)) return false;
        if (IsBadReadPtr(Enemy->RootComponent, 8)) return false;
        if (IsBadReadPtr(Enemy->HealthComponent, 8)) return false;

        // 3. Vérification Logique
        if (Enemy->HealthComponent->HP <= 0.0f) return false;

        return true;
        } __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    }

    ImU32 GetBoxColor(AActor* Actor, APawn* MyPawn) {
        __try {
            APawn* TargetPawn = (APawn*)Actor;
            if (IsBadReadPtr(TargetPawn, 8)) return visuals::COLOR_DEFAULT;
            if (IsBadReadPtr(MyPawn, 8)) return visuals::COLOR_DEFAULT;

            ABP_PlayerState_C* TargetState = (ABP_PlayerState_C*)TargetPawn->PlayerState;
            ABP_PlayerState_C* SelfState = (ABP_PlayerState_C*)MyPawn->PlayerState;

            if (!TargetState || IsBadReadPtr(TargetState, 8)) return visuals::COLOR_ENEMY; // Par défaut ennemi si pas de state
            if (!SelfState || IsBadReadPtr(SelfState, 8)) return visuals::COLOR_ENEMY;     // Par défaut ennemi si JE n'ai pas de state

            if (TargetState->Team == SelfState->Team) {
                return visuals::COLOR_TEAM;
            }
            else {
                return visuals::COLOR_ENEMY;
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {
            return visuals::COLOR_DEFAULT;
        }
    }

    void RenderESPBox(AActor* Actor, APawn* MyPawn, FVector CamLoc, FRotator CamRot, float CamFOV, int Width, int Height, ImU32 BoxColor) {
        __try {
        ABP_PlayerCharacter_C* Enemy = (ABP_PlayerCharacter_C*)Actor;

        FVector Origin = Actor->RootComponent->RelativeLocation;
        FVector Head = Origin; Head.Z += 90.0f;
        FVector Feet = Origin; Feet.Z -= 90.0f;
        
        // 5. World To Screen
        FVector2D Head2D = Math::WorldToScreen(Head, CamLoc, CamRot, CamFOV, Width, Height);
        FVector2D Feet2D = Math::WorldToScreen(Feet, CamLoc, CamRot, CamFOV, Width, Height);

        // 6. Vérification écran
        if (Head2D.X <= 0 || Head2D.X > Width || Head2D.Y <= 0 || Head2D.Y > Height) return;

        // 7. Dessin
        float HeightBox = Feet2D.Y - Head2D.Y;
        float WidthBox = HeightBox * 0.5f;
        float X = Head2D.X - (WidthBox / 2.0f);
        float Y = Head2D.Y;

        ImGui::GetBackgroundDrawList()->AddRect(ImVec2(X, Y), ImVec2(X + WidthBox, Y + HeightBox), BoxColor, 0.0f, 0, 1.5f);

        // Barre de vie
        float HealthPct = Enemy->HealthComponent->HP / Enemy->HealthComponent->MaxHP;
        if (HealthPct > 1.0f) HealthPct = 1.0f;
        float BarHeight = HeightBox * HealthPct;
        ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(X - 5, Y), ImVec2(X - 2, Y + HeightBox), IM_COL32(0, 0, 0, 255));
        ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(X - 5, Y + HeightBox - BarHeight), ImVec2(X - 2, Y + HeightBox), IM_COL32(0, 255, 0, 255));

        } __except (EXCEPTION_EXECUTE_HANDLER) {}
    }

    void DrawESP() {
        // --- SÉCURITÉ ET CONTEXTE ---
        if (!Globals::GWorld || !Globals::GWorld->PersistentLevel) return;

        UGameInstance* GI = Globals::GWorld->OwningGameInstance;
        if (!GI || GI->LocalPlayers.Num() == 0) return;

        ULocalPlayer* LocalPlayer = GI->LocalPlayers[0];
        if (!LocalPlayer || !LocalPlayer->PlayerController) return;

        APlayerController* MyPC = LocalPlayer->PlayerController;
        APawn* MyPawn = MyPC->Pawn;

        // --- CAMERA ---
        FVector CamLoc; FRotator CamRot; float CamFOV = 90.0f;

        if (MyPC->PlayerCameraManager) {
            if (IsBadReadPtr(MyPC->PlayerCameraManager, 8)) return;
            FMinimalViewInfo POV = MyPC->PlayerCameraManager->ViewTarget.POV;
            CamLoc = POV.Location;
            CamRot = POV.Rotation;
            CamFOV = POV.FOV;
        }
        else { return; }

        int width = Renderer::screenWidth;
        int height = Renderer::screenHeight;
        if (width <= 0 || height <= 0) return;

        // --- 2. BOUCLE ACTEURS ---
        ULevel* Level = Globals::GWorld->PersistentLevel;
        AActorArray* ActorList = (AActorArray*)((uintptr_t)Level + 0x98);

        if (!ActorList || IsBadReadPtr(ActorList, 8)) return;
        if (!ActorList->Data || ActorList->Count <= 0 || ActorList->Count > 10000) return;

        for (int i = 0; i < ActorList->Count; i++) {
            if (IsBadReadPtr(&(ActorList->Data[i]), 8)) continue;
            AActor* Actor = ActorList->Data[i];

            if (!Actor || IsBadReadPtr(Actor, 8)) continue;
            if (Actor == MyPawn) continue;

            if (!CheckActorName(Actor) || !CheckEnemy(Actor)) continue;

            ImU32 BoxColor = GetBoxColor(Actor, MyPawn);
            RenderESPBox(Actor, MyPawn, CamLoc, CamRot, CamFOV, width, height, BoxColor);
        }
    }
}