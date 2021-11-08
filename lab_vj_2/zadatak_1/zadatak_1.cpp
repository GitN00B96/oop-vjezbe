#include<iostream>


//. Napisati funkciju koja računa najveći i najmanji broj u nizu od n prirodnih
//brojeva.Funkcija vraća tražene brojeve pomoću referenci.
void find_arr_min_max(int arr[], int l, int* max, int* min)
{
	int i(0);
	for (i; i < l; ++i) {
		if (arr[i] > *max)
			*max = arr[i];
		if (arr[i] < *min)
			*min = arr[i];
	}
}
int main() {
	int* arr;
	int arr_len;
	std::cout << "Enter lenght of array n: ";
	scanf_s("%d", &arr_len);
	arr = new int[arr_len];
	std::cout << "Enter array elements:" << std::endl;
	for (int j = 0; j < arr_len; j++) {
		std::cout << "Element["<<j<<"]: ";
		scanf_s("%d", &arr[j]);
	}
	int max_element = arr[0];
	int min_element = arr[0];

	find_arr_min_max(arr, arr_len, &max_element, &min_element);
	std::cout << "Iterative function returns elements from array(using reference) with maximum and minimum value, max(value) = " << max_element << " and min(value) = " << min_element << "\n";
	delete[]arr;
	return 0;
}