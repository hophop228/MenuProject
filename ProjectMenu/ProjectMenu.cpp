#include <iostream>

int main() {
	std::setlocale(LC_ALL, "");

	int input;

	do {
		std::cout << "Привет, друг!" << std::endl;
		std::cout << "1 - хочу учиться математике" << std::endl;
		std::cout << "0 - хочу лежать" << std::endl;
		std::cout << "Ввод: ";

		std::cin >> input;
		if (input == 1) {
			//TODO
		}
		else if (input == 0) {
			exit(0);
		}

		std::cout << std::endl;

	} while (true);

	return 0;
}