#include<iostream>
#include <iomanip>
#include <time.h>

//Zadatak 3) Napisati iterativnu funkciju za traženje najvećeg i najmanjeg broja u nizu.

void find_arr_min_max(int arr[], int l)
{
	int i(0);
	int min = arr[i];
	int max = arr[i];

	for (i; i < l; ++i) {

		if (arr[i] > max)
			max = arr[i];

		if (arr[i] < min)
			min = arr[i];

	}
	std::cout << "Iterative function returns elements from array with maximum and minimum value, max(value) = " << max << " and min(value) = " << min << "\n";
}

int main() {
	int arr[8] = { 2,21,117,63,14,0,223,-10 };
	int arr_len = sizeof(arr) / sizeof(arr[0]);
	find_arr_min_max(arr, arr_len);
	return 0;
}
