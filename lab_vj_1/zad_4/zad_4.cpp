#include<iostream>
#include <iomanip>
#include <time.h>
//Zadatak 4) Napisati rekurzivnu funkciju za traženje najvećeg i najmanjeg broja u nizu.

void find_min_max_arr_elem(int arr[], int len, int& min, int& max) {
	if (len == 0) {
		return;
	}
	if (arr[len - 1] > max) {
		max = arr[len - 1];
	}
	if (arr[len - 1] < min) {
		min = arr[len - 1];
	}
	find_min_max_arr_elem(arr, len - 1, min, max);
}

int main() {

	int arr[5] = { 111,3,33,53,50 };
	int arr_len = (sizeof(arr) / sizeof(arr[0])) - 1;
	int min(arr[arr_len]);
	int max(arr[arr_len]);
	find_min_max_arr_elem(arr, arr_len, min, max);
	std::cout << "Recursive function returns elements from array with maximum and minimum value, max(value) = " << max << " and min(value) = " << min << "\n";
	return 0;
}
