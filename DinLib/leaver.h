#pragma once
#include <iostream>

#ifdef DINLIB_EXPORTS
#define DINLIB __declspec(dllexport)
#else
#define DINLIB __declspec(dllimport)
#endif

class Leaver {
public:
	DINLIB void leave(std::string str);
};
