#include <iostream>
#include <string>

using namespace std;

string get_table(int num) {
	string table = "";
	int num1 = 1;

	while (num1 <= num) {
		table += to_string(num1) + " -\t" + to_string(num1 * num1) + '\n';
		num1++;
	}
	return table;
}