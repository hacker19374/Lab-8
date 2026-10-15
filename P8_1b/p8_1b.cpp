#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {
	int x = 0;
	int y = 0;

	double total = 0;

	double min;

	srand(time(0));

	cout << "Enter number of minutes for each drunkard to stagger: ";

	while (cin >> min) {
		total = 0;

		for (int r = 0; r < 10000; r++) {
			x = 0;
			y = 0;
			for (int i = 0; i < (min * 60); i++) {
				x += rand() % 3 - 1;
				y += rand() % 3 - 1;
			}

			total += std::sqrt((x * x) + (y * y));

		}
		cout << "Expected distance: " << std::sqrt((min * 60) * 1.07111);

		cout << "\nAverage distance: " << total / 10000;

		cout << "\nEnter number of minutes for each drunkard to stagger: ";
	}

}
