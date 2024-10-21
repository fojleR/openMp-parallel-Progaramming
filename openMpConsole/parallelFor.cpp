#include <iostream>


using namespace std;

int main() {

#pragma omp parallel 
	{
		printf("Hello world");
	}

	return 0;
}