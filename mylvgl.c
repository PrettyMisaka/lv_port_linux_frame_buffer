#include "mylvgl.h"

uint32_t MY_LV_EVENT_UPDATE;
lv_obj_t * bar;

pthread_t thread;
host_data_t host_data;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

static void mylv_event_init();
static void mylv_bar_init();

void mylv_init(){
    mylv_event_init();
    mylv_bar_init();
}

static void mylv_event_init(){
    MY_LV_EVENT_UPDATE = lv_event_register_id();

}

static void mylv_bar_init(){
    static lv_style_t style_bg;
    static lv_style_t style_indic;

    lv_style_init(&style_bg);
    lv_style_set_border_color(&style_bg, lv_palette_main(LV_PALETTE_BLUE));
    lv_style_set_border_width(&style_bg, 2);
    lv_style_set_pad_all(&style_bg, 6); /*To make the indicator smaller*/
    lv_style_set_radius(&style_bg, 6);
    lv_style_set_anim_time(&style_bg, 1000);

    lv_style_init(&style_indic);
    lv_style_set_bg_opa(&style_indic, LV_OPA_COVER);
    lv_style_set_bg_color(&style_indic, lv_palette_main(LV_PALETTE_BLUE));
    lv_style_set_radius(&style_indic, 3);

    bar = lv_bar_create(lv_scr_act());
    lv_obj_remove_style_all(bar);  /*To have a clean start*/
    lv_obj_add_style(bar, &style_bg, 0);
    lv_obj_add_style(bar, &style_indic, LV_PART_INDICATOR);
    lv_obj_set_size(bar, 200, 20);
    lv_obj_center(bar);
    lv_bar_set_value(bar, 0, LV_ANIM_OFF);

    // void my_event_cb(lv_event_t * event){
    //     // mypthread_mutex_lock(&mutex);
    //     printf("Clicked\n");
    //     lv_bar_set_value(bar, (int)host_data.cpu, LV_ANIM_OFF);
    //     // mypthread_mutex_unlock(&mutex);
    // }
    // lv_obj_add_event_cb(bar, my_event_cb, MY_LV_EVENT_UPDATE, NULL);   /*注册回调函数Assign an event callback*/

    lv_anim_t bar_anim;
    lv_anim_init(&bar_anim);
    lv_anim_set_var(&bar_anim, bar); 
    lv_anim_set_values(&bar_anim, 0, 100);
    lv_anim_set_time(&bar_anim, 10000);
    lv_anim_set_exec_cb(&bar_anim, (lv_anim_exec_xcb_t)lv_bar_set_value);
    lv_anim_set_path_cb(&bar_anim, lv_anim_path_linear );   //设置一个动画的路径
    lv_anim_start(&bar_anim);              

    // lv_bar_set_value(bar, 100, LV_ANIM_ON);
}

int pthread_status;
int update_status = 0;

static void* ptintf_hello_world();

void mypthread_init(){
    char str[] = "hello world!";
    pthread_status = pthread_create(&thread,NULL,ptintf_hello_world,NULL);
}

static void* ptintf_hello_world(){
    printf("thread create success\n");
    while(1){
        // mypthread_mutex_lock(&mutex);
        host_data.cpu = host_data.cpu + 0.2;
        if(host_data.cpu > 100) host_data.cpu = 0.0;
        lv_event_send(bar, MY_LV_EVENT_UPDATE, NULL);
        printf_clean();
        printf("%f\n",host_data.cpu);
        // mypthread_mutex_unlock(&mutex);
        usleep(50*1000);
    }
}

int mypthread_mutex_lock(pthread_mutex_t* _mutex){
#ifndef LOG
    return pthread_mutex_lock(&mutex);
#else
    int tmp = pthread_mutex_lock(_mutex);
    printf("mutex_status:%d\n",tmp);
    return tmp;
#endif
}
int mypthread_mutex_unlock(pthread_mutex_t* _mutex){
#ifndef LOG
    return pthread_mutex_unlock(&mutex);
#else
    int tmp = pthread_mutex_unlock(_mutex);
    printf("mutex_status:%d\n",tmp);
    return tmp;
#endif
}

int mypthread_mutex_status_log(pthread_mutex_t* _mutex){
#ifndef LOG
    return pthread_mutex_trylock(_mutex);
#else
    int tmp = pthread_mutex_trylock(_mutex);
    printf("mutex_lock_status:%d\n",tmp);
    return tmp;
#endif
}

void printf_clean(){
    printf("\033[A");//将当前光标往上移动一行
    printf("\033[K");//删除光标后面的内容
}