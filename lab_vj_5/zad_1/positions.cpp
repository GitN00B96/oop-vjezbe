#include "Positions.hpp"

// setter f-ja //
void DotPosition::SetDotPositionValue(double x, double y, double z) { //za Set() isto ...
	lenght = x; // funkcija prima parametre koji su koordinate(DotPositions)
	height = y;
	width  = z;
}
// takoder setter f-ja, s random vrijednostima //
void DotPosition::SetDotPositionRandomValue(int low, int high) {
	lenght = double(low + rand() % ((high - low) + 1)); // +1 da uracuna i high
	height = double(low + rand() % ((high - low) + 1));
	width  = double(low + rand() % ((high - low) + 1));
}
double DotPosition::Calculate2D_Distance(double x, double y) {
	return sqrt(pow(x - lenght, 2) + pow(y - height, 2));
}

double DotPosition::Calculate3D_Distance(double x, double y, double z) {
	return sqrt(pow(lenght - x, 2) + pow(height - y, 2) + pow(width - z, 2));
}
