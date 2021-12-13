#include "Positions.hpp"

int main() {
	srand(unsigned(time(NULL)));
	DotPosition pos1, pos2;
	double x, y, z; 
	int low_border, high_border;
	std::cout << "Enter x coordinate: ";
	std::cin >> x;
	std::cout << "Enter y coordinate: ";
	std::cin >> y;
	std::cout << "Enter z coordinate: ";
	std::cin >> z;
	//pos1.SetDotPositionValue(2.1, 3.3, 4.2);	//pomocu settera da san koordinatama vrijednosti
	pos1.SetDotPositionValue(x, y, z);		// trazim od korisnika da unese pozicije tocke
	std::cout << "pos1.Lenght:" << pos1.GetLenght() << "\npos1.Height:" << pos1.GetHeight() << "\npos1.Width:" << pos1.GetWidth() << std::endl;// funkcija get koja dohvaca settane vrijednosti tako da ih mogu printat
	std::cout << "Enter interval borders(low & high) for random values that can be assigned to coordinates..\nLow Border:";
	std::cin >> low_border;
	std::cout << "High Border:";
	std::cin >> high_border;
	std::cout << std::endl;
	pos2.SetDotPositionRandomValue(low_border, high_border);// funkcija koja varijabli pos2(tipa (struktura)DotPosition) dodjeli random vrijednosti za duljinu, visinu, sirinu.
	std::cout << "pos2.lenght:" << pos2.GetLenght() << "\npos2.Height:" << pos2.GetHeight() << "\npos2.Width:" << pos2.GetWidth() << std::endl;
	std::cout << "2D distance between coordinate pos2 and pos1(z axis excluded) is: " << pos1.Calculate2D_Distance(pos2.GetLenght(), pos2.GetHeight()) << std::endl;
	std::cout << "3D distance between coordinate pos2 and pos1 is :" << pos2.Calculate3D_Distance(pos1.GetLenght(), pos1.GetHeight(), pos1.GetWidth()); // mogu i zamjeniti isto je
  return 0;
}
