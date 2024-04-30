#ifndef __MYLVGL_H__
#define __MYLVGL_H__

#include "main.h"

extern uint32_t MY_LV_EVENT_UPDATE;
extern lv_obj_t * bar;
extern pthread_mutex_t mutex;//线程锁
extern host_data_t host_data;

void mylv_init();
void mypthread_init();

int mypthread_mutex_lock(pthread_mutex_t* _mutex);
int mypthread_mutex_unlock(pthread_mutex_t* _mutex);
int mypthread_mutex_status_log(pthread_mutex_t* _mutex);

void printf_clean();

#endif