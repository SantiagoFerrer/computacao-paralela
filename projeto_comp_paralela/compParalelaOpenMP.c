#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define thread_count 4

double S = 0;

void Taylor(int t)
{
	double aux;
	aux = 1/t;
  #pragma omp critical
    S += aux;
}

int main()
{
   S = 0;
  #pragma omp parallel for num_threads(thread_count)
	for (int t = 0; t <= 1000; t++)
  {
    Taylor (t);
	}
  printf("S = %f",S);
	return 0;
   
}