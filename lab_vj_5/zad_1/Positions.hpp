#pragma once 
#include<iostream>
#include <cstdlib>
#include<cmath>
// geteri i seteri //
class DotPosition {
	double lenght = 0, width = 0, height = 0;       // pozicije tocke u prostoru pretpostavljene = 0// ......... triba bi imat set i get posebno za svaku (private)varijablu ----
public:
	double GetLenght() const { return lenght; }   // funkcije get stavimo u 'public' i pomocu nje mozemo dohvacati/mjenjati 'private' varijable // 'one liner-i' mogu ih odma ode napisat
	double GetWidth()  const { return width; }
	double GetHeight() const { return height; }

	void SetDotPositionValue(double, double, double);
	void SetDotPositionRandomValue(int, int);
	double Calculate2D_Distance(double, double);
	double Calculate3D_Distance(double, double, double);
};


