#pragma once

namespace AKrivoshein {
	struct MenuItem {
		const char* const title; //текст, который выводится
		const MenuItem* (*func)(const MenuItem* current); //указатель на функцию, которая будет выполняться

		const MenuItem* const* children; //дети нашего эл-та меню
		const int children_amount; //кол-во детей
	};
}