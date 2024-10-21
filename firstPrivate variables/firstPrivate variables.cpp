#include <iostream>

using namespace std;


int main() {

	int x = 10;
	int y;

	#pragma omp parallel private(y) firstprivate(x) num_threads(4)
	{
		y = x;
		y += 10;
		printf("x: %d, y: %d \n", x, y);
	}

	return 0;
}