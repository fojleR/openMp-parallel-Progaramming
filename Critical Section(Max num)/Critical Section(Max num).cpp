#include <iostream>
#include <omp.h>

using namespace std;

#define SIZE  10

int main() {

	int a[SIZE];
	int mx;

	for (int i = 0; i < SIZE; i++) {
		a[i] = rand();
		cout << a[i] << endl;
	}

	mx = a[0];


	
		#pragma omp parallel for num_threads(4)
		for (int i = 0; i < SIZE; i++) {
			#pragma omp critical
			{
				mx = max(mx, a[i]);
			}
		}
	

	printf("%d", mx);




	return 0;
}