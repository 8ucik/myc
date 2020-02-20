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

void notify(sigval_t sig);

int main(void){
	struct sigevent se = {0};
	struct itimerspec its = {0};
	timer_t timer_id = 0;
	int status;

	se.sigev_notify_function = notify;
	se.sigev_notify = SIGEV_THREAD;
	se.sigev_value.sival_ptr = &timer_id;
	se.sigev_notify_attributes = NULL;
	status = timer_create(CLOCK_REALTIME,&se,&timer_id);

	printf("status: %d\ntimerid: %p\nerr: %d\ndesc: %s\n",status,timer_id,errno,strerror(errno));

	its.it_interval.tv_sec = 1;
	its.it_interval.tv_nsec = 0;
	its.it_value.tv_sec = 1;
	its.it_value.tv_nsec = 0;
	timer_settime(timer_id, 0, &its, NULL);

	while(1){

	}

	return 0;
}

void notify(sigval_t sig){

	printf("Timer pid: %d\n",getpid());

}
