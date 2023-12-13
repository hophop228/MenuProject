#pragma once

namespace AKrivoshein {
	struct MenuItem {
		const char* const title; //текст, который выводится
		void (*func)(); //указатель на функцию, которая будет выполняться
	};
}