#include <iostream>
using namespace std;

double over_number(double a);

int main() {
	double a;
	cout << "Input a number: ";
	cin >> a;

	cout << "Your over number is " << over_number(a);
	return 0;
}