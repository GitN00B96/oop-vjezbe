#include<iostream>
//2. Napisati funkciju koja vraća referencu na neki element niza.Koristeći po -
//vratnu vrijednost funkcije kao lvalue uvećajte i - ti element niza za jedan.


int& return_reference(int* arr, int n) {
	return arr[n];
}


int main() {
	int* array;
	int arr_len, n;
	std::cout << "Enter array lenght: ";
	std::cin >> arr_len;
	std::cout << "Enter an array index(0 - " << arr_len-1 << "): ";
	std::cin >> n;
	if (n > (arr_len - 1) || n < 0) {
		std::cout << "Error, not an array index.";
		return 1;
	}
	array = new int[arr_len];
	std::cout << "Enter array elements: " << std::endl;
	for (int i = 0; i < arr_len; i++) {
		std::cout << "Element[" << i << "]:";
		std::cin >> array[i];
	}
	return_reference(array, n)++;								 

	delete[]array;
	return 0;
}

