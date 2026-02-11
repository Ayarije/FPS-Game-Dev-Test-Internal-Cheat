#pragma once
#include <Windows.h>
#include <string>
#include <unordered_map>

namespace signatures {
	inline std::string getControlRotation = "40 53 48 83 EC 30 48 8B 42 20 45 33 C9 48 85 C0 49 8B D8 41 0F 95 C1 4C 03 C8 4C 89 4A 20 48 8D 54 24 20 48 8B 01 FF 90 80 06 00 00";
	inline uintptr_t getControlRotationPtr = 0x0;

	inline std::string getPlayerViewPoint = "48 89 5C 24 10 48 89 74 24 18 55 41 56 41 57 48 8B EC 48 83 EC 40";
	inline uintptr_t getPlayerViewPointPtr = 0x0;

	inline std::unordered_map<std::string*, uintptr_t*> Signatures = {
		{&getControlRotation, &getControlRotationPtr},
		{&getPlayerViewPoint, &getPlayerViewPointPtr}
	};
}