#include <iostream>
#include "windows.h"
#include "DinLib/leaver.h"

int main() {
	std::string name;
	Leaver lv;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите свое имя: ";
	std::cin >> name;
	lv.leave(name);
}