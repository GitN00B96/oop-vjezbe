#pragma once
#include "C:/Users/Mario/Desktop/oop lab_vj/lab_vj_5/zad_1/Positions.hpp"
#include<iostream>

class Weapon {	//postavio sam vrijednosti za neko specificno oruzje...settere radim u slucaju da zelim  promjeniti oruzje s kojim gadam metu
	double lenght = 3, width = 2.5, const height = 1; // const jer pucac stalno drzi pistolj u ruci bez podizanja...moze se okrecati za 360 stupnjeva da bi gadao mete
	int MagazineCapacity = 30;
	int BulletsLeft = 30;
public: 
	double GetWeaponLenght() { return lenght; }							
	double GetWeaponWidth()  { return width; }
	double GetWeaponHeight() { return height; }
														
	int GetMagazineCapacity() const { return MagazineCapacity; }
	int GetBulletsLeft() const { return BulletsLeft; }

	void SetWeaponPosition(double, double); // ako zelim mogucnost promjene oruzja(tj. polozaja, br. metaka itd...)
	void SetMagazineCapacity(int );   
	void Shoot();
	void Reload();
};

