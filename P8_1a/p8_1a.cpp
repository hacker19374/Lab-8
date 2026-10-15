#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
	int x = 0;
	int y = 0;

	srand(time(0));
	for (int r = 0; r <= 10; r++) {
		x = 0;
		y = 0;
		for (int i = 0; i < 120; i++) {
			x += rand() % 3 - 1;
			y += rand() % 3 - 1;
		}
		cout << "Drunkard #" << r << ": Finished at location (" << x << ", " << y << ")\n";
	}

	
}
