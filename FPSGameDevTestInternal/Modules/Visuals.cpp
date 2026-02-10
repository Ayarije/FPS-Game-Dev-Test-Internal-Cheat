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
        } __except (EXCEPTION_EXECUTE_HANDLER) {
            std::cout << "  > [ERROR] Error in actor check: passing" << std::endl;
            return false;
        }
    }

    void RenderESPBox(AActor* Actor, APawn* MyPawn, FVector CamLoc, FRotator CamRot, float CamFOV, int Width, int Height) {
        __try {
        FVector Origin = Actor->K2_GetActorLocation();
        FVector Head = Origin; Head.Z += 90.0f;
        FVector Feet = Origin; Feet.Z -= 90.0f;
        std::cout << "  > Actor Head: x=" << Head.X << " y=" << Head.Y << " z=" << Head.Z << std::endl;

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

        ImGui::GetBackgroundDrawList()->AddRect(ImVec2(X, Y), ImVec2(X + WidthBox, Y + HeightBox), visuals::COLOR_ENEMY, 0.0f, 0, 1.5f);

        // Barre de vie
        /*
        float HealthPct = Enemy->HealthComponent->HP / Enemy->HealthComponent->MaxHP;
        if (HealthPct > 1.0f) HealthPct = 1.0f;
        float BarHeight = HeightBox * HealthPct;
        ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(X - 5, Y + HeightBox - BarHeight), ImVec2(X - 2, Y + HeightBox), IM_COL32(0, 255, 0, 255));
        ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(X - 5, Y), ImVec2(X - 2, Y + HeightBox), IM_COL32(0, 0, 0, 255));
        */
        } __except (EXCEPTION_EXECUTE_HANDLER) {
            std::cout << "  > [ERROR] Render failed (probably Actor->K2_Get_Actor_Location)" << std::endl;
        }

    }

    void DrawESP() {
        // --- 1. SÉCURITÉ ET CONTEXTE ---
        if (!Globals::GWorld || !Globals::GWorld->PersistentLevel) return;

        UGameInstance* GI = Globals::GWorld->OwningGameInstance;
        if (!GI || GI->LocalPlayers.Num() == 0) return;

        ULocalPlayer* LocalPlayer = GI->LocalPlayers[0];
        if (!LocalPlayer || !LocalPlayer->PlayerController) return;

        APlayerController* MyPC = LocalPlayer->PlayerController;
        APawn* MyPawn = MyPC->Pawn;

        // --- CAMERA ---
        FVector CamLoc; FRotator CamRot; float CamFOV = 90.0f;

        // Ici on utilise __try localement JUSTE pour la caméra si besoin,
        // mais idéalement on fait une lecture simple de pointeur
        if (MyPC->PlayerCameraManager) {
            if (IsBadReadPtr(MyPC->PlayerCameraManager, 8)) return;
            uintptr_t PCM = (uintptr_t)MyPC->PlayerCameraManager;
            CamLoc = *(FVector*)(PCM + 0xEA0);
            CamRot = *(FRotator*)(PCM + 0xEA0 + 0xC);
            CamFOV = *(float*)(PCM + 0xEA0 + 0x18);
        }
        else { return; }

        int width = Renderer::screenWidth;
        int height = Renderer::screenHeight;
        if (width <= 0 || height <= 0) return;

        ImGui::GetForegroundDrawList()->AddText(ImVec2(50, 50), IM_COL32(255, 255, 0, 255), "ESP ACTIVE");

        // --- 2. BOUCLE ACTEURS ---
        ULevel* Level = Globals::GWorld->PersistentLevel;
        AActorArray* ActorList = (AActorArray*)((uintptr_t)Level + 0x98);

        if (!ActorList || IsBadReadPtr(ActorList, 8)) return;
        if (!ActorList->Data || ActorList->Count <= 0 || ActorList->Count > 10000) return;

        std::cout << "[DEBUG] Total Acteurs: " << ActorList->Count << std::endl;

        for (int i = 0; i < ActorList->Count; i++) {
            if (IsBadReadPtr(&(ActorList->Data[i]), 8)) continue;
            AActor* Actor = ActorList->Data[i];

            if (!Actor || IsBadReadPtr(Actor, 8)) continue;
            if (Actor == MyPawn) continue;


            if (!CheckActorName(Actor)) {
                continue;
            }

            std::cout << "[DEBUG] Rendering actor " << i << std::endl;

            if (!CheckEnemy(Actor)) {
                std::cout << "  > [ERROR] Check failed" << std::endl;
                continue;
            }
            else {
                std::cout << "  > [DEBUG] Check succeded" << std::endl;
            }

            RenderESPBox(Actor, MyPawn, CamLoc, CamRot, CamFOV, width, height);
        }
    }
}