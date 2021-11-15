#include<string>
#include<iostream>
using namespace std;
//5. Napisati funkciju koja broji koliko pojavljivanja danog podstringa ima u stringu ko -
//risteći funkcije standardne biblioteke.
void Substring_Occurrence(string str, string substr, int &count) {
	int findsub = str.find(substr, 0); 
	while (findsub != string::npos) // npos,  means until the end of the string.
	{
		count++;
		findsub = str.find(substr, findsub + 1);
	}
	cout << "Number of occurrences = " << count;
}
int main() {
	string str, substring;
	int count = 0;
	cout << "Enter string: ";
	cin >> str;
	cout << "Enter substring: ";
	cin >> substring;
	Substring_Occurrence(str, substring, count);
	return 0;
}
