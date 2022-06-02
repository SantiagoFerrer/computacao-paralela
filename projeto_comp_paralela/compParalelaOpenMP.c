#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define thread_count 6

int main()
{
    double aux;                                                     //variável local que armazena os resultados das threads
#pragma omp parallel for num_threads(thread_count) reduction(+:aux) // "parallel for" cria uma thread a cada iteração
    for (int t = 1; t <= 100; t++)                                  // "num_thread" define quantas threads podem ser criadas por vez
    {                                                               // no caso, 6.
        double n = t;                                               // "reduction(+:aux)" define que os resultados de cada thread serão
        aux += 1 / n;                                               // unidos na variável aux.
    }
    printf("S = %f", aux);
    return 0;
}
