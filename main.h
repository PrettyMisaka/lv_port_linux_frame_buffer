#ifndef __MAIN_H__
#define __MAIN_H__

#include "lvgl/lvgl.h"
#include "lvgl/demos/lv_demos.h"
#include "lv_drivers/display/fbdev.h"
#include "lv_drivers/indev/evdev.h"
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <sys/time.h>

#include <pthread.h>

#define LOG

typedef struct host_data{
    float cpu;
}host_data_t;

#endif