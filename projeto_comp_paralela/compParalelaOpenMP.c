#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define thread_count 6

double S = 0;

int main()
{
    S = 0;
    double aux;
#pragma omp parallel for num_threads(thread_count) reduction(+:aux)
    for (int t = 1; t <= 100; t++)
    {
        double n = t;
        aux += 1 / n;
    }
    S = aux;
    printf("S = %f", S);
    return 0;

}
