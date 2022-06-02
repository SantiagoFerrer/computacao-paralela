#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define thread_count 2

double S = 0;

void Taylor(double t)
{
	double aux;
	aux = 1 / t;
#pragma omp critical
	S += aux;
}

int main()
{
	S = 0;
#pragma omp parallel for num_threads(thread_count)
	for (int t = 1; t <= 1000000; t++)
	{
		double n = t;
		Taylor(n);
	}
	printf("S = %f", S);
	return 0;

}
