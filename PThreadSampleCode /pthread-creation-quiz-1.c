/* PThread Creation Quiz 1 */ 

#include <stdio.h>
#include <pthread.h> //Include pthread library

#define NUM_THREADS 4

void *hello (void *arg) { /* thread main */
	printf("Hello Thread\n");
	return 0;
}

/*int pthread_create(pthread_t *thread , const pthread_attr_t *attr, 
	void * (*start_routine)(void *), void *arg);*/

/*
comile the code => gcc -o pthread-creation-quiz-1 pthread-creation-quiz-1.c -lpthread
*/
int main (void) {
	int i;
	pthread_t tid[NUM_THREADS];
	
	for (i = 0; i < NUM_THREADS; i++) { /* create/fork threads */
		pthread_create(&tid[i], NULL, hello, NULL); 

	}
	
	for (i = 0; i < NUM_THREADS; i++) { /* wait/join threads */
		pthread_join(tid[i], NULL);
	}
	return 0;
}
