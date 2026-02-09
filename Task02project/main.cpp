#include <iostream>
using namespace std;

string number(int num);
string ten(int num);
string hundred(int num);
string one(int num);
string teen(int num);

int main() {
	cout << "***The name of the number as a string***" << '\n';
	int num;
	cout << "Input number in 0 - 999: ";
	cin >> num;

	if (num < 0 || num > 999) {
		cout << "Error. Try again.";
		return -1;
	}
	else if (num < 20) {
		cout << "The number as a string: " << number(num);
	}
	else if ((num % 100) == 0) {
		cout << "The number as a string: " << hundred(num);
	}
	else if (num > 100 && ((num % 100) > 10) && ((num % 100) < 20)) {
		cout << "The number as a string: " << hundred(num) << "-" << teen(num);
	}
	 else if (num < 100) {
		cout << "The number as a string: " << ten(num) << one(num);
	}
	else {
		cout << "The number as a string: " << hundred(num) << "-" << ten(num) << one(num);
	}
	return 0;
}