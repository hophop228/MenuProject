#include "menu_functions.hpp"

#include <iostream>
#include <cstdlib>

const AKrivoshein::MenuItem* AKrivoshein::show_menu(const MenuItem* current) {
	std::cout << "Привет, друг!" << std::endl;
	for (int i = 1; i < current->children_amount; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;

	std::cout << "Ввод: ";

	int input;
	std::cin >> input;
	std::cout << std::endl;

	return current->children[input];
}

const AKrivoshein::MenuItem* AKrivoshein::exit(const MenuItem* current) {
	std::exit(0);
}

const AKrivoshein::MenuItem* AKrivoshein::study_mp(const MenuItem* current) {
	//TODO
	std::cout << "1";
	return current;
}

const AKrivoshein::MenuItem* AKrivoshein::study_linux(const MenuItem* current) {
	//TODO
	std::cout << "2";
	return current;
}

const AKrivoshein::MenuItem* AKrivoshein::study_eng(const MenuItem* current) {
	//TODO
	std::cout << "3";
	return current;
}

const AKrivoshein::MenuItem* AKrivoshein::study_org(const MenuItem* current) {
	//TODO
	std::cout << "4";
	return current;
}

const AKrivoshein::MenuItem* AKrivoshein::study_algebra(const MenuItem* current) {
	//TODO
	std::cout << "5";
	return current;
}

const AKrivoshein::MenuItem* AKrivoshein::study_go_back(const AKrivoshein::MenuItem* current) {
	std::cout << "0";
	return current;
}
