#pragma once

#include <iostream>

#include "../ImGui/imgui.h"

#include "../Core/Globals.h"
#include "../Core/Renderer.h"

#include "../Utils/Math.h"

namespace visuals {
	struct AActorArray {
		AActor** Data;
		int32_t Count;
		int32_t Max;
	};

	extern ImU32 COLOR_ENEMY;
	extern ImU32 COLOR_TEAM;
	extern ImU32 COLOR_DEFAULT;

	bool CheckActorName(AActor* Actor);
	bool CheckEnemy(AActor* Actor);
	ImU32 GetBoxColor(AActor* actor, APawn* MyPawn);
	void RenderESPBox(AActor* Actor, APawn* MyPawn, FVector CamLoc, FRotator CamRot, float CamFOV, int Width, int Height);
	void DrawESP();
}