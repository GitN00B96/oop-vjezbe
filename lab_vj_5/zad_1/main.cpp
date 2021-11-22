#include <iostream>
#include "Positions.hpp"
#include <time.h>

int main() {
	srand((unsigned)time(NULL));
	int low, high;
	std::cout << "Enter low border: ";
	std::cin >> low;
	std::cout << "Enter high border: ";
	std::cin >> high;
	DotPosition p1, p2;
	p1.SetRandom(low, high);
	p2.SetRandom(low, high);
	std::cout << "\np1:\n";
	std:: cout << "x = " << p1.get_x() << std::endl;
	std::cout << "y = " << p1.get_y() << std::endl;
	std::cout << "z = " << p1.get_z() << std::endl;
	std::cout << "\np2:\n";
	std::cout << "x = " << p2.get_x() << std::endl;
	std::cout << "y = " << p2.get_y() << std::endl;
	std::cout << "z = " << p2.get_z() << std::endl;
	return 0;
}