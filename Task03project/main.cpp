#include <iostream>
using namespace std;
 
string get_table(int num);


int main() {
	int num;
	
	cout << "Input number: ";
	cin >> num;
	
	cout << get_table(num);

	return 0;
}