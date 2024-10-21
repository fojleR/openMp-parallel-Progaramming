#include <iostream>
#include <omp.h>

using namespace std;

int main() {
	int sum = 0;

	#pragma omp parallel for num_threads(4) reduction(+: sum) 
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("%d", sum);
	return 0;
}