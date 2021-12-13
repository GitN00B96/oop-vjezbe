#include "Target.hpp"
#include<vector>
#include <time.h>


int main() {
	srand(time(NULL));
				//	ZADATAK_3	//
	std::vector<Target> GeneratedTargets;


			// AKO MJENJAM POLOZAJ METE //
	//double x1, x2, y1, y2;
	//std::cout << "Enter target coordinates.\nEnter BottomLeft_X: ";
	//std::cin >> x1;
	//t1.SetBottomLeft_X(x1);
	//std::cout << "Enter BottomLeft_Y: ";
	//std::cin >> y1;
	//t1.SetBottomLeft_Y(y1);
	//std::cout << "Enter UpperRight_X: ";
	//std::cin >> x2;
	//t1.SetUpperRight_X(x2);
	//std::cout << "Enter UpperRight_Y: ";
	//std::cin >> y2;
	//t1.SetUpperRight_Y(y2);

	//std::cout<< "Coordinates entered are:\nBottomLeft_X = " << t1.GetBottomLeft_X() << std::endl;
	//std::cout << "BottomLeft_Y = " << t1.GetBottomLeft_Y() << std::endl;
	//std::cout << "UpperRight_X = " << t1.GetUpperRight_X() << std::endl;
	//std::cout << "UpperRight_Y = " << t1.GetUpperRight_Y() << std::endl;

	int n, target_hit_counter = 0;
	std::cout << "Enter number of targets you want to generate(n): ";
	std::cin >> n;
	Weapon ak_47;

	for (int i = 0; i < n; i++) {
		Target temp;
		temp.GenerateTarget();
		GeneratedTargets.push_back(temp);
	}
			// --- ERROR --- // 
	//for (Target i : GeneratedTargets) {
	//	std::cout << GeneratedTargets << " "; // error
	//}
	// AKO ZELIM MOGUCNOST NAMISTANJA ORUZJA SVAKI PUT ? //	
	//double x, z;
	//std::cout << "Enter weapon lenght(x) and width(z).\nx = ";
	//std::cin >> x;
	//std::cout << "z = ";
	//std::cin >> z;
	for (int i = 0; i < n; i++) {  // Q: ----- IDEJA: svaku metu gadam jednim metkom , ako ispraznim spremnik idem na reload?
		Target temp_target = GeneratedTargets.at(i); 
		if (ak_47.GetBulletsLeft() == 0) {
			ak_47.Reload();
		}
		//ak_47.SetWeaponPosition(x, z);
		ak_47.Shoot();
		bool boolean_temp = temp_target.SetCondition(ak_47); // u boolean_temp spremam condition tj jeli pogofen ili nije pomocu funkcije SetCondition kojoj kao argument dajem oruzje koje ima tip weapon pa na taj nacin provjeravam da li je metak pogodio metu(metak ide pravocrtno?) 

		if (boolean_temp == true) {
			int sml = 1;									  // smile when target is hit :)
			char ch = sml;									 // 
			std::cout << "Target hit  " << ch << std::endl; //
			target_hit_counter++;
		}
		else {
			std::cout << "You missed the target.\n";
		}
	}
	std::cout << "\nNumber of targets that got hit: " << target_hit_counter;

	return 0;
}

// ERROR sta je baca na liniji 47. za funkciju reload() --- rjesia --- UBACIA SAN U PROJECT zad_3 Weapon.cpp --- jel to ima smisla, ali nebi triba moc koristit funkcije iz drugog projecta ako includam header file