#pragma once
#include <Windows.h>
#include <string>
#include <unordered_map>

namespace signatures {
	inline std::string getControlRotation = "40 53 48 83 EC 30 48 8B 42 20 45 33 C9 48 85 C0 49 8B D8 41 0F 95 C1 4C 03 C8 4C 89 4A 20 48 8D 54 24 20 48 8B 01 FF 90 80 06 00 00";
	inline std::string getPlayerViewPoint = "48 89 5C 24 10 48 89 74 24 18 55 41 56 41 57 48 8B EC 48 83 EC 40";
	inline std::string setShooting = "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 30 4C 8B 72 10";

	inline void* getControlRotationPtr = nullptr;
	inline void* getPlayerViewPointPtr = nullptr;
	inline void* setShootingPtr = nullptr;

	inline std::unordered_map<std::string, void**> Signatures = {
		{getControlRotation, &getControlRotationPtr},
		{getPlayerViewPoint, &getPlayerViewPointPtr},
		{setShooting, &setShootingPtr}
	};
}