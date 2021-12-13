#include "C:/Users/Mario/Desktop/oop lab_vj/lab_vj_5/zad_2/Weapon.h"
#include "C:/Users/Mario/Desktop/oop lab_vj/lab_vj_5/zad_1/Positions.hpp"

void Weapon::SetWeaponPosition(double x, double z) {
	lenght = x;
	width = z;
}
void Weapon::SetMagazineCapacity(int mc) {
	MagazineCapacity = mc;
}
void Weapon::Reload() {
	std::cout << "...RELOADING...\n";
	BulletsLeft = MagazineCapacity;
}
void Weapon::Shoot() { //kad napisem Wapon :: tada funkcija moze pristupiti svim elementima klase(moze ih i mjenjati)...samo main treba set funkciju kada hoce promjeniti nesto
	if (BulletsLeft == 0) {
		std::cout << "Out of ammo...Reload";
	}
	else {
		BulletsLeft--;
		std::cout << "Shots fired(" << BulletsLeft << " bullets left)" << std::endl;
		
	}
}

// KOPIRANA IZ PROSLOG PROJECTA //