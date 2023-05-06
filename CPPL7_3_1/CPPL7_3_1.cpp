#include <iostream>
#include <Windows.h>
#include "SmartArray.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	try {
		smart_array arr(5);
		arr.add_element(1);
		arr.add_element(4.1);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);
		//arr.add_element(15);
		std::cout << arr.get_element(1) << std::endl;
	}
	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
}