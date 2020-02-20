/*
 * main.c
 *
 *  Created on: Feb 20, 2020
 *      Author: nanker
 */
#include <stdio.h>
#include <signal.h>
#include <time.h>
#include <error.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

void notify(sigval_t sig);
int makeTimer(int t);
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

int main(void){

	makeTimer(3);
	makeTimer(4);

	while(1){
		sleep(3600);
	}

	return 0;
}


int makeTimer(int t){
	struct sigevent se = {0};
	struct itimerspec its = {0};
	timer_t timer_id = 0;
	int status;

	se.sigev_notify_function = notify;
	se.sigev_notify = SIGEV_THREAD;
	se.sigev_value.sival_ptr = &timer_id;
	se.sigev_notify_attributes = NULL;
	se.sigev_value.sival_int = t;
	status = timer_create(CLOCK_REALTIME,&se,&timer_id);

	printf("status: %d\ntimerid: %p\nerr: %d\ndesc: %s\n",status,timer_id,errno,strerror(errno));

	its.it_interval.tv_sec = t;
	its.it_interval.tv_nsec = 0;
	its.it_value.tv_sec = t;
	its.it_value.tv_nsec = 0;
	timer_settime(timer_id, 0, &its, NULL);

	return 0;
}

void notify(sigval_t sig){
	pthread_mutex_lock (&mutex);
	printf("Timer sigval: %d\n",sig.sival_int);
	pthread_mutex_unlock (&mutex);
}
