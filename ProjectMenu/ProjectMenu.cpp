#include <iostream>

#include "menu_item.hpp";
#include "menu_functions.hpp"

int main() {
	std::setlocale(LC_ALL, "");




	//Объявляем элементы меню
	AKrivoshein::MenuItem study_mp = { "1 - учить современное программирование с лучшим преподаваталем", AKrivoshein::study_mp };
	AKrivoshein::MenuItem study_linux = { "2 - учить линукс", AKrivoshein::study_linux };
	AKrivoshein::MenuItem study_eng = { "3 - учить английский", AKrivoshein::study_eng };
	AKrivoshein::MenuItem study_org = { "4 - учить основы российской государственности", AKrivoshein::study_org };
	AKrivoshein::MenuItem study_algebra = { "5 - учить алгебру", AKrivoshein::study_algebra };
	AKrivoshein::MenuItem study_go_back = { "0 - выйти назад", AKrivoshein::study_go_back };

	AKrivoshein::MenuItem* study_children[] = {
		&study_go_back,
		&study_mp,
		&study_linux,
		&study_eng,
		&study_org,
		&study_algebra
	};

	const int study_size = sizeof(study_children) / sizeof(study_children[0]);

	AKrivoshein::MenuItem study = { "1 - хочу учиться математике", AKrivoshein::show_menu, study_children, study_size };
	AKrivoshein::MenuItem exit = { "0 - хочу лежать", AKrivoshein::exit };

	AKrivoshein::MenuItem* begin_children[] = { &exit, &study };
	const int begin_size = sizeof(begin_children) / sizeof(begin_children[0]);

	AKrivoshein::MenuItem begin = { nullptr, AKrivoshein::show_menu, begin_children, begin_size };

	const AKrivoshein::MenuItem* current = &begin;

	do {
		current = current->func(current);
	} while (true);

	return 0;
}