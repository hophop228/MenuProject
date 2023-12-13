#include <iostream>

#include "menu_item.hpp";
#include "menu_functions.hpp"

int main() {
	std::setlocale(LC_ALL, "");
	
	//Объявляем элементы меню
	AKrivoshein::MenuItem begin = { "1 - хочу учиться математике", AKrivoshein::begin };
	AKrivoshein::MenuItem exit = { "0 - хочу лежать", AKrivoshein::exit };

	AKrivoshein::MenuItem* items_of_menu[] = { &exit, &begin };
	const int items_of_menu_size = sizeof(items_of_menu) / sizeof(items_of_menu[0]);

	int input;

	do {
		std::cout << "Привет, друг!" << std::endl;
		for (int i = 0; i < items_of_menu_size; i++) {
			std::cout << items_of_menu[i]->title << std::endl;
		}
		std::cout << "Ввод: ";

		std::cin >> input;
		items_of_menu[input]->func();

		std::cout << std::endl;

	} while (true);

	return 0;
}