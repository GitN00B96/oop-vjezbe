#pragma once
#include "C:/Users/Mario/Desktop/oop lab_vj/lab_vj_5/zad_2/Weapon.h"
#include "C:/Users/Mario/Desktop/oop lab_vj/lab_vj_5/zad_1/Positions.hpp"

class Target { // meta je 3D?
	double BottomLeft_X, BottomLeft_Y, UpperRight_X, UpperRight_Y, BottomLeft_Z, UpperRight_Z;	// Q: ----- Sta kad bi ima ovako DotPosition BottomLeft, UpperRight tipa DotPosition... kako iskoristiti strukturu unutar strukture
	bool condition;  // target hit/not hit 
public:
	double GetBottomLeft_X() const { return BottomLeft_X; }
	double GetBottomLeft_Y() const { return BottomLeft_Y; }
	double GetUpperRight_X() const { return UpperRight_X; }
	double GetUpperRight_Y() const { return UpperRight_Y; }
	double GetBottomLeft_Z() const { return BottomLeft_Z; } 
	double GetUpperRight_Z() const { return UpperRight_Z; }
	bool GetCondition() { return condition; }

	void SetBottomLeft_X();
	void SetBottomLeft_Y();
	void SetUpperRight_X();
	void SetUpperRight_Y();
	bool SetCondition(Weapon);
	void GenerateTarget();


};

