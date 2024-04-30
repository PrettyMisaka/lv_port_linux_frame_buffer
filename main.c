#include "main.h"
#include "mylvgl.h"
#include "ui/ui.h"

#define DISP_BUF_SIZE (128 * 1024)

int main(void)
{
    /*LittlevGL init*/
    lv_init();

    /*Linux frame buffer device init*/
    fbdev_init();
    lv_bmp_init();

    /*A small buffer for LittlevGL to draw the screen's content*/
    static lv_color_t buf[DISP_BUF_SIZE];

    /*Initialize a descriptor for the buffer*/
    static lv_disp_draw_buf_t disp_buf;
    lv_disp_draw_buf_init(&disp_buf, buf, NULL, DISP_BUF_SIZE);

    /*Initialize and register a display driver*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.draw_buf   = &disp_buf;
    disp_drv.flush_cb   = fbdev_flush;
    disp_drv.hor_res    = 480;
    disp_drv.ver_res    = 320;
    lv_disp_drv_register(&disp_drv);

    //evdev_init();
    //static lv_indev_drv_t indev_drv_1;
    //lv_indev_drv_init(&indev_drv_1); /*Basic initialization*/
    //indev_drv_1.type = LV_INDEV_TYPE_POINTER;

    /*This function will be called periodically (by the library) to get the mouse position and state*/
    //indev_drv_1.read_cb = evdev_read;
    //lv_indev_t *mouse_indev = lv_indev_drv_register(&indev_drv_1);


    /*Set a cursor for the mouse*/
    //LV_IMG_DECLARE(mouse_cursor_icon)
    //lv_obj_t * cursor_obj = lv_img_create(lv_scr_act()); /*Create an image object for the cursor */
    //lv_img_set_src(cursor_obj, &mouse_cursor_icon);           /*Set the image source*/
    //lv_indev_set_cursor(mouse_indev, cursor_obj);             /*Connect the image  object to the driver*/

    lv_bmp_init();
    lv_obj_t *img= lv_img_create(lv_scr_act()); 
    lv_img_set_src(img, "A:./misaka.png"); // 设置图像数据源，文件类型可以是：1.jpg, 1.sjpg, 1.png, 1.bmp
    //lv_obj_set_pos(img, 0, 0);
    lv_obj_align(img, LV_ALIGN_CENTER, 0, 0);  // 居中显示
    /*Create a Demo*/
    //lv_demo_widgets();
    //lv_demo_benchmark();
    //lv_demo_stress();

    /*Handle LitlevGL tasks (tickless mode)*/
    // mylv_init();
    mypthread_init();
    printf("%d,%d",MY_LV_EVENT_UPDATE,MY_LV_EVENT_UPDATE);
    ui_init();
    while(1) {
        // lv_bar_set_value(bar, (int)host_data.cpu, LV_ANIM_OFF);
        lv_timer_handler();
        usleep(5000);
    }

    return 0;
}

/*Set in lv_conf.h as `LV_TICK_CUSTOM_SYS_TIME_EXPR`*/
uint32_t custom_tick_get(void)
{
    static uint64_t start_ms = 0;
    if(start_ms == 0) {
        struct timeval tv_start;
        gettimeofday(&tv_start, NULL);
        start_ms = (tv_start.tv_sec * 1000000 + tv_start.tv_usec) / 1000;
    }

    struct timeval tv_now;
    gettimeofday(&tv_now, NULL);
    uint64_t now_ms;
    now_ms = (tv_now.tv_sec * 1000000 + tv_now.tv_usec) / 1000;

    uint32_t time_ms = now_ms - start_ms;
    return time_ms;
}
