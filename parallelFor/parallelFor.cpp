#include<iostream>
#include<omp.h>

using namespace std;

int main() {
	int i, sum = 0;
	int threadSum[4] = { 0 };
	omp_set_num_threads(4);

#pragma omp parallel 
	{
		int id = omp_get_thread_num();
		threadSum[id] = 0;
		#pragma omp for 
		for (i = 1; i <= 100; i++) {
			threadSum[id] += i;
		}
	}
	for (i = 0; i < 4; i++) {
		sum += threadSum[i];
	}

	printf("sum is % d: ", sum);

	return 0;
}