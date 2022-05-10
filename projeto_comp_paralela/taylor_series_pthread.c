#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define THREADCOUNT 2

double res = 0.0;

void *thread_t1(void* threadId)
{
	double i = 0.0;

    	for (i = 1.0; i <= 500.0; i++)
	{
		res = res + 1/i;
	}
}

void *thread_t2(void* threadId)
{
	double i = 0.0;

    	for (i = 501.0; i <= 1000.0; i++)
	{
		res = res + 1/i;
	}
}


int main()
{
   pthread_t threads[THREADCOUNT];

    int t1, t2;

	long t = 0;
	
	t1 = pthread_create(&threads[0], NULL, thread_t1, (void*) t);
	t2 = pthread_create(&threads[1], NULL, thread_t2, (void*) t);
	
    	if (t1 || t2)
    	{
        	printf("Thread nao foi criada");
    	}
    	else
    	{
        	pthread_join(threads[0], NULL);
        	pthread_join(threads[1], NULL);
        	printf("Resultado: %f", res);
        	printf("\n");
    	}
	return 0;
   
}