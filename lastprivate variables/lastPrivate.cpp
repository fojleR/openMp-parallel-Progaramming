#include <iostream>

using namespace std;

int main() {
	int x = 10, y;
	#pragma omp parallel private(y) lastprivate(x) num_threads(5)
	{
		y = x;
		y += 10;
		x = y;
		printf("x: %d, y: %x \n", x, y);
	}
	return 0;
}