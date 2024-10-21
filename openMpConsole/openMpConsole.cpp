#include <iostream>
#include<omp.h>

using namespace std;



int main(){
	omp_set_num_threads(4);
	int id;
	#pragma omp parallel
	
	
	{
		id = omp_get_thread_num();
		printf("Thread %d: Hello world! \n", id);
	}

}
