#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

bool all_the_same(int x, int y, int z);
bool all_different(int x, int y, int z);
bool sorted(int x, int y, int z);

int main(void) {
	double x;
	double y;
	double z;


	cout << "Enter 3 numbers or Q to quit: ";
	while (cin >> x >> y >> z) {
		if (all_the_same(x,y,z)) {
			cout << "Numbers are all the same.";
		}
		else {
			cout << "Numbers are not all the same.";
		}
		if (all_different(x, y, z)) {
			cout << "\nNumbers are all different.";
		}
		else {
			cout << "\nNumbers are not all different.";
		}
		if (sorted(x, y, z)) {
			cout << "\nNumbers are sorted.";
		}
		else {
			cout << "\nNumbers are not sorted.";
		}

		cout << "\nEnter 3 numbers or Q to quit: ";
	}
}


bool all_the_same(int x, int y, int z) {
	return (x == y == z);
}

bool all_different(int x, int y, int z) {
	return !(x == y == z);
}

bool sorted(int x, int y, int z) {
	return (x <= y && y <= z);
}
