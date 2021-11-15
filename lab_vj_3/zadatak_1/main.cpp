#include"header_vektori.h"

using namespace std;

int main() {
	vector<int> vect, vect_interval, vec_new;
	int vect_elements, low_border, high_border, value;

	cout << "Enter number of vector elements: ";
	cin >> vect_elements;

	Vector_Input(vect, vect_elements);
	cout << "\nPrinting vector elements: ";
	Vector_Print(vect);

	cout << "Enter low_border: ";
	cin >> low_border;
	cout << "Enter high_border: ";
	cin >> high_border;

	Vector_Input_Interval(vect_interval, low_border, high_border);
	cout << "\nPrinting vector elements(interval function): ";
	Vector_Print(vect_interval);
	Vector_New(vect, vect_interval, vec_new);
	cout << "\nPrinting vec_new(contains elements from first vector which are not in the second vector): ";
	Vector_Print(vec_new);
	//Insert_Sum_Zero(vec_new);
	//cout << "Printing vec_new after adding zero and sum: ";
	//Vector_Print(vec_new);
	cout << "Enter a value you want to erase from vector: ";
	cin >> value;
	Vector_Remove_Element(vec_new, value);
	cout << "\n nakon brisanja value";
	Vector_Print(vec_new);
	return 0;

}