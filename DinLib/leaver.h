#pragma once
#include <iostream>

#ifdef LIBRARYDYNAMIC_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif

class Leaver {
public:
	LIBRARY_API void leave(std::string str);
};
