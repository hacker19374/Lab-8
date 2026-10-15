#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int first_digit(int x);
int last_digit(int x);
int digits(int x);

int main(void) {
	int num;

	cout << "Enter number or Q to quit: ";

	while (cin >> num) {
		cout << "First digit: " << first_digit(num) << " Last digit: " << last_digit(num) << " Number of digits: " << digits(num);
		cout << "\nEnter number or Q to quit: ";
	}
}


int first_digit(int x) {
	int b = x;
	while (b >= 10) {
		b /= 10;
	}
	return b;
}

int last_digit(int x) {
	return x % 10;
}

int digits(int x) {
	int b = x;
	int c = 1;
	while (b >= 10) {
		b /= 10;
		c++;
	}
	return c;
}
