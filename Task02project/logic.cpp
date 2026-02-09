#include <iostream>
using namespace std;

string number(int num) {
	string answer;
	
	if (num < 0 || num > 999) {
		answer = "Error. Try again.";
	}
	else if (num == 0) {
		answer = "Zero";
	}
	else if (num < 20) {
		switch (num) {
		case 1: answer = "One"; break;
		case 2: answer = "Two"; break;
		case 3: answer = "Three"; break;
		case 4: answer = "Four"; break;
		case 5: answer = "Five"; break;
		case 6: answer = "Six"; break;
		case 7: answer = "Seven"; break;
		case 8: answer = "Eight"; break;
		case 9: answer = "Nine"; break;
		case 10: answer = "Ten"; break;
		case 11: answer = "Eleven"; break;
		case 12: answer = "Twelve"; break;
		case 13: answer = "Thirteen"; break;
		case 14: answer = "Fourteen"; break;
		case 15: answer = "Fifteen"; break;
		case 16: answer = "Sixteen"; break;
		case 17: answer = "Seventeen"; break;
		case 18: answer = "Eighteen"; break;
		case 19: answer = "Nineteen"; break;
		}
	}
	return answer;
}
string one(int num) {
	string one;
	int one1 = num % 10;

	switch (one1) {
	case 0: one = ""; break;
	case 1: one = "-one"; break;
	case 2: one = "-two"; break;
	case 3: one = "-three"; break;
	case 4: one = "-four"; break;
	case 5: one = "-five"; break;
	case 6: one = "-six"; break;
	case 7: one = "-seven"; break;
	case 8: one = "-eight"; break;
	case 9: one = "-nine"; break;
	}
	return one;
}
string ten(int num) {
	string ten;
	int ten1 = (num % 100) / 10;

	switch (ten1) {
	case 0: ten = ""; break;
	case 2: ten = "twenty"; break;
	case 3: ten = "thirty"; break;
	case 4: ten = "fourty"; break;
	case 5: ten = "fifty"; break;
	case 6: ten = "sixty"; break;
	case 7: ten = "seventy"; break;
	case 8: ten = "eighty"; break;
	case 9: ten = "ninety"; break;
	default: ten = "Error";
	}
	return ten;
}
string teen(int num) {
	string teen;
	int teen1 = (num % 100);

	switch (teen1) {
	case 11: teen = "eleven"; break;
	case 12: teen = "twelve"; break;
	case 13: teen = "thirteen"; break;
	case 14: teen = "fourteen"; break;
	case 15: teen = "fifeeny"; break;
	case 16: teen = "sixteen"; break;
	case 17: teen = "seventeen"; break;
	case 18: teen = "eighteen"; break;
	case 19: teen = "nineteen"; break;
	}
	return teen;
}
string hundred(int num) {
	string hundred;
	int hundred1 = (num / 100);

	switch (hundred1) {
	case 1: hundred = "one hundred"; break;
	case 2: hundred = "two hundred"; break;
	case 3: hundred = "three hundred"; break;
	case 4: hundred = "four hundred"; break;
	case 5: hundred = "five hundred"; break;
	case 6: hundred = "six hundred"; break;
	case 7: hundred = "seven hundred"; break;
	case 8: hundred = "eight hundred"; break;
	case 9: hundred = "nine hundred"; break;
		return hundred;
	}
}