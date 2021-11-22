//1. Napisati klasu za poziciju točke u prostoru koja ima tri double podatka : dužinu,
//širinu i visinu(x, y, z koordinate).Klasa ima sljedeće funkcije :
//◦Funkciju za postavljanje vrijednosti članova(treba imati pretpostavljene vri -
//	jednosti 0).
//◦Funkciju za postavljanje pseudorandom vrijednosti članova(granice intervala
//	su parametri funkcije).

class DotPosition {
	double x, y, z;
public:
	DotPosition() { x = 0 ; y = 0; z = 0; }//konstruktor
	void set(double x, double y, double z);
	double get_x();
	double get_y();
	double get_z();
	void SetRandom(int l, int h);

};