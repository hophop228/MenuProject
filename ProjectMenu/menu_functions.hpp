#pragma once

#include "menu_struct.hpp"

namespace AKrivoshein {
	const MenuItem* show_menu(const MenuItem* current);

	const MenuItem* exit(const MenuItem* current);

	const MenuItem* study_mp(const MenuItem* current);
	const MenuItem* study_linux(const MenuItem* current);
	const MenuItem* study_eng(const MenuItem* current);
	const MenuItem* study_org(const MenuItem* current);
	const MenuItem* study_algebra(const MenuItem* current);
	const MenuItem* study_go_back(const MenuItem* current);
}