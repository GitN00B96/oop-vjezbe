#include"header_vektori.h"
#include <algorithm>
#include<numeric>


void Vector_Input(vector<int>& vect, int vect_elements) {
	int elem;
	for (int i = 0; i < vect_elements; i++) {
		cout << "Enter vector element[" << i << "]: ";
		cin >> elem;
		vect.push_back(elem);
	}
}
void Vector_Input_Interval(vector<int>& vect, int low, int high) {
	int elem;
	while (1) {
		cout << "Enter vector element(numbers from range " << low << " to " << high << "): ";
		cin >> elem;
		if (elem < low || elem > high) {
			cout<< elem << " is not a number from the given range, breaking from loop!" << endl;
			break;
		}
		vect.push_back(elem);
	}
}
void Vector_Print(vector<int>& vect) {
	for (unsigned i = 0; i < vect.size(); i++){
		cout << vect.at(i) << " ";
	}
	cout << "\n";
}
void Vector_New(vector<int>& vect, vector<int>& vect_interval, vector<int>& vec_new) {
	for (unsigned i = 0; i < vect.size(); i++) {
		if (find(vect_interval.begin(), vect_interval.end(), vect.at(i)) != vect_interval.end()) {		// != vect_interval.end() jer nemogu stavit -1(.end stavlja iterator na poziciju nakon zadnjeg elementa vektora)
			cout << "Element "<< vect.at(i) <<" found in vect_interval(don't add this element to vec_new).\n";
			continue;
		}
		else {
			vec_new.push_back(vect.at(i));
		}
	}
}
//void Insert_Sum_Zero(vector<int>& vec_new) {
//	int temp_min = vec_new.at(0);
//	int	temp_max = vec_new.at(0);
//	vector<int>::iterator position_zero = vec_new.begin(); // Declaring iterator to a vector
//	int sum = accumulate(vec_new.begin(), vec_new.end(), 0); // 0 ode je inicijalna vrijednost sume
//
//	for (unsigned i = 0; i < vec_new.size(); i++) {
//		if (vec_new.at(i) < temp_min) {
//			temp_min = vec_new.at(i);
//			position_zero = (vec_new.begin() + i + 1);
//		}
//	}
//	vec_new.insert(position_zero, 0);
//}
//	vector<int>::iterator position_sum = vec_new.begin();
//
//	for (unsigned j = 0; j < vec_new.size(); j++) {
//		if (vec_new.at(j) < temp_max) {
//			temp_max = vec_new.at(j);
//			position_sum = (vec_new.begin() + j + 1);  // ako sortiram vektor onda mogu ubacit sum ispred najveceg jer je na kraju a smin li to?
//		}
//	}
//	
//	vec_new.insert(position_sum, sum);

//}
void Vector_Remove_Element(vector<int>& vec_new, int value) {
	vec_new.erase(remove(vec_new.begin(), vec_new.end(), value), vec_new.end()); // erase brise element // remove ako makne iste elemente napuni vektor elementima koje ne zelimo, pomocu Erase–remove idiom uklanjamo nezeljene elemente
}
