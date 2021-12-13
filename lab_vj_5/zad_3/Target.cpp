#include"Target.hpp"		
#include "C:/Users/Mario/Desktop/oop lab_vj/lab_vj_5/zad_2/Weapon.h"
#include "C:/Users/Mario/Desktop/oop lab_vj/lab_vj_5/zad_1/Positions.hpp"
// --- OVO SADA NE RADIM JER GENERIRAM RANDOM METE --- //  Q: -----AKO NAPRAVIM DA SU TIP KLASE DOTPOSITION KAKO IMPLEMENTIRATI KOD //
// 
//void Target::SetBottomLeft_X(double bl_x) { 
//	BottomLeft_X = bl_x;
//}
//void Target::SetBottomLeft_Y(double bl_y) {
//	BottomLeft_Y = bl_y;
//}
//void Target::SetUpperRight_X(double ur_x) {
//	UpperRight_X = ur_x;
//}
//void Target::SetUpperRight_Y(double ur_y) {
//	UpperRight_Y = ur_y;
//}



void Target::GenerateTarget() {          // onda mi set(linije povise) ne triba funkcija GenerateTarget moze biti kao setter
	BottomLeft_X = rand() % 10;
	BottomLeft_Y = rand() % 10;
	BottomLeft_Z = rand() % 10;
	UpperRight_X = BottomLeft_X + 2;    // tako da x2 bude veci (jer je upper)
	UpperRight_Y = BottomLeft_Y + 2;    // isto za y2
	UpperRight_Z = BottomLeft_Z + 2;
}
bool Target::SetCondition(Weapon w){
	if ((((w.GetWeaponLenght() >= BottomLeft_X) && (w.GetWeaponLenght() <= UpperRight_X)) && ((w.GetWeaponHeight() >= BottomLeft_Y) && (w.GetWeaponHeight() <= UpperRight_Y))) && ((w.GetWeaponWidth() >= GetBottomLeft_Z()) && (w.GetWeaponWidth() <= UpperRight_Z) )) {
		return true;
	}
	else {
		return false;
	}
}