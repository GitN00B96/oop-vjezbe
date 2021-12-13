#include"Weapon.h"
#include "C:/Users/Mario/Desktop/oop lab_vj/lab_vj_5/zad_1/Positions.hpp"

int main() {
	Weapon gun;
				// AKO IGRAC BIRA ORUZJE //
	//double x, z;
	//int mc;
	//std::cout << "Enter Weapon coordinates\nX(coordinate) = ";
	//std::cin >> x;
	//std::cout << "Enter Weapon coordinates\nY(coordinate) = ";
	//std::cin >> z;
	//gun.SetWeaponPosition(x, z);
	//std::cout << "X = " << gun.GetWeaponLenght() << "\nY = " << gun.GetWeaponWidth() << std::endl;
	//std::cout << "Set Magazine Capacity(max bullets a magazine can store): ";
	//std::cin >> mc;
	//gun.SetMagazineCapacity(mc);
	//std::cout << "Magazine capacity set to " << gun.GetMagazineCapacity() << " bullets." << std::endl;
	//std::cout << "Bullets left: " << gun.GetBulletsLeft();

				// SA PREDODREDENIM KARAKTERISTIKAMA ORUZJA //
	char command;
	std::cout << "Let's play a shooting game!\n";
	std::cout << "Commands: Press 's' to shoot, 'r' to reload or 'x' to exit the game: ";

	while (1) {
		std::cout << "\nEnter command: ";
		std::cin >> command;
		if (command != 's' && command != 'r' && command != 'x') {
			std::cout << "Invalid input...(Press 's' to shoot, 'r' to reload or 'x' to exit the game)";
		}
		if (command == 's') {
			gun.Shoot();
			std::cout << "Bullets left = " << gun.GetBulletsLeft();
		}
		if (command == 'r') {
			gun.Reload();
			std::cout << "Magazine reloaded.(" << gun.GetMagazineCapacity() << " bullets left).";
		}
		if (command == 'x') {
			std::cout << "C U next time sheriff";
			break;
		}
	}
	return 0;
}