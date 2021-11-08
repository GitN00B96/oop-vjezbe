#include <iostream>
#include <cmath>


//3. Definirati strukturu kruznica i strukturu pravokutnik koja predstavlja
// 
//pravokutnik čije su stranice paralelne sa osima apscisa i ordinata.Napisati
//funkciju koja prima niz pravokutnika i jednu kruznicu i vraća broj pravo -
//kutnika koji sijeku kružnicu.Niz pravokutnika i kružnica šalju se u funkciju
//pomoću const referenci.
//Napomena:
//– Jednadžba kružnice sa središtem u S(xs, ys)radijusa r
//(x−xs)^2 + (y−ys)^2 = r^2
//– Pravokutnik u koordinatnom sustavu je određen sa svojom donjom lije -
//vom i gornjom desnom točkom.

typedef struct {
	float radius;
	float cx, cy;
}Circle;

typedef struct {
	float x1, x2, y1, y2;
}Rectangle;

int intersect(Rectangle* rect, Circle circ) {
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		if ((rect[i].x1 <= circ.cx <= rect[i].x2) & (abs(rect[i].y1 - circ.cy) <= circ.radius))
		{
			count += 1;
			continue;
		}
		if ((rect[i].x1 <= circ.cx <= rect[i].x2) & (abs(rect[i].y2 - circ.cy) <= circ.radius))
		{
			count += 1;
			continue;
		}
		if ((rect[i].y1 <= circ.cy <= rect[i].y2) & (abs(rect[i].x2 - circ.cx) <= circ.radius))
		{
			count += 1;
			continue;
		}
		if ((rect[i].y1 <= circ.cy <= rect[i].y2) & (abs(rect[i].x1 - circ.cx) <= circ.radius))
		{
			count += 1;
			continue;
		}
	}
	return count;
}

int main() {
	int num;
	std::cout << "Enter number of rectangles: ";
	std::cin >> num;
	Rectangle* rec_arr;
	rec_arr = new Rectangle[num];
	Circle circ;
	for (int i = 0; i < 2; i++) {
		std::cout << "Enter bottom left coordinate(x1, y1) for rectangle[" << i << "]:"<<std::endl;
		std::cin >> rec_arr[i].x1;
		std::cin >> rec_arr[i].y1;
		std::cout << "Enter upper right coordinate(x2, y2) for rectangle[" << i << "]:" << std::endl;
		std::cin >> rec_arr[i].x2;
		std::cin >> rec_arr[i].y2;
	}
	std::cout << "Enter center of circle(cx and cy): ";
	std::cin >> circ.cx;
	std::cin >> circ.cy;
	std::cout << "Enter circle radius: ";
	std::cin >> circ.radius;

	std::cout<<"\nNumber of rectangles that intersect with circle: " << intersect(rec_arr, circ);
	delete rec_arr;
	return 0;
}