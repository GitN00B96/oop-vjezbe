#include<iostream>
#include<string>
#include<vector>

using namespace std;

void Invert_String() {
	int num;
	string input;
	vector<string> vec;
	cout << "Enter number of strings: ";
	cin >> num;
	cout << "Enter strings for storing into vector: " << endl;
	for (int i = 0; i < num; i++) {
		cin >> input;
		reverse(input.begin(), input.end());
		vec.push_back(input);
	}
	for (int i = 0; i << vec.size(); i++) { // zasto warning za < a za << ne
		cout << vec.at(i) << " ";
	}
}

int main() {
	Invert_String();
	return 0;
}