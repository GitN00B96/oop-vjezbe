#include<iostream>
#include "Positions.hpp"

void DotPosition::set(double px, double py, double pz) {
	x = px; y = py; z = pz;

}
double DotPosition::get_x()
{
	return x;
}
double DotPosition::get_y()
{
	return y;
}
double DotPosition::get_z()
{
	return z;
}
void DotPosition::SetRandom(int low, int high)
{
	x = rand() % (high - low) + low;
	y = rand() % (high - low) + low;
	z = rand() % (high - low) + low;
}
