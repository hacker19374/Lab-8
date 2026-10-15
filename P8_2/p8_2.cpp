#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double smallest(double x, double y, double z);
double average(double x, double y, double z);

int main(void) {
	double x;
	double y;
	double z;


	cout << "Enter 3 numbers: ";
	cin >> x >> y >> z;

	double small = smallest(x, y, z);
	double avg = average(x, y, z);

	cout << "Smallest value is " << small;
	cout << "\nAverage is " << avg;
}

double smallest(double x, double y, double z) {
	return std::min(x, std::min(y,z));
}

double average(double x, double y, double z) {
	double total = 0;

	total += x + y + z;

	return total / 3;
}


