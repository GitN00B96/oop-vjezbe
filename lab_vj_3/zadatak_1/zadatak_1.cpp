#include<iostream>
#include <vector>

void input_print_vector() {
	std::vector<int> num;
	int len, temp;
	std::cout << "Enter number of vector elements: ";
	std::cin >> len;
	for (int i = 0; i < len; i++) {
		std::cout << "Element[" << i << "]: ";
		std::cin >> temp;
		num.push_back(temp);
	}
	for (int j = 0; j < len; j++) {
		std::cout << num[j] << "\t";
	}

}



int main() {
	input_print_vector();
	return 0;
}
