// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: milkv-duos-prj

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label_CPU = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label_CPU, 24);
    lv_obj_set_height(ui_Label_CPU, 72);
    lv_obj_set_x(ui_Label_CPU, 40);
    lv_obj_set_y(ui_Label_CPU, 47);
    lv_label_set_text(ui_Label_CPU, "C\nP\nU");
    lv_obj_set_style_text_align(ui_Label_CPU, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_CPU, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_CPU_Tem = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_Arc_CPU_Tem, 130);
    lv_obj_set_height(ui_Arc_CPU_Tem, 130);
    lv_obj_set_x(ui_Arc_CPU_Tem, 100);
    lv_obj_set_y(ui_Arc_CPU_Tem, 24);
    lv_arc_set_value(ui_Arc_CPU_Tem, 75);
    lv_obj_set_style_radius(ui_Arc_CPU_Tem, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc_CPU_Tem, 20, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc_CPU_Tem, lv_color_hex(0x3CD7EC), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc_CPU_Tem, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc_CPU_Tem, 20, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc_CPU_Tem, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_CPU_Tem, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc_CPU_Tem, -1, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc_CPU_Tem, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc_CPU_Tem, -1, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc_CPU_Tem, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label_CPU_Tem_Val = lv_label_create(ui_Arc_CPU_Tem);
    lv_obj_set_width(ui_Label_CPU_Tem_Val, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_CPU_Tem_Val, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_CPU_Tem_Val, 0);
    lv_obj_set_y(ui_Label_CPU_Tem_Val, 7);
    lv_obj_set_align(ui_Label_CPU_Tem_Val, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_CPU_Tem_Val, "50°C");
    lv_obj_set_style_text_font(ui_Label_CPU_Tem_Val, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_CPU_Tem = lv_label_create(ui_Arc_CPU_Tem);
    lv_obj_set_height(ui_Label_CPU_Tem, 14);
    lv_obj_set_width(ui_Label_CPU_Tem, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Label_CPU_Tem, 0);
    lv_obj_set_y(ui_Label_CPU_Tem, -15);
    lv_obj_set_align(ui_Label_CPU_Tem, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_CPU_Tem, "Tem\n");
    lv_obj_set_style_text_color(ui_Label_CPU_Tem, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_CPU_Tem, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_CPU_Tem, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_CPU_Tem, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_CPU_Usage = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_Arc_CPU_Usage, 130);
    lv_obj_set_height(ui_Arc_CPU_Usage, 130);
    lv_obj_set_x(ui_Arc_CPU_Usage, 285);
    lv_obj_set_y(ui_Arc_CPU_Usage, 24);
    lv_arc_set_value(ui_Arc_CPU_Usage, 75);
    lv_obj_set_style_radius(ui_Arc_CPU_Usage, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc_CPU_Usage, 20, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc_CPU_Usage, lv_color_hex(0x3CD7EC), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc_CPU_Usage, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc_CPU_Usage, 20, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc_CPU_Usage, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_CPU_Usage, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc_CPU_Usage, -1, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc_CPU_Usage, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc_CPU_Usage, -1, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc_CPU_Usage, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label_CPU_Usage_Val = lv_label_create(ui_Arc_CPU_Usage);
    lv_obj_set_width(ui_Label_CPU_Usage_Val, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_CPU_Usage_Val, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_CPU_Usage_Val, 0);
    lv_obj_set_y(ui_Label_CPU_Usage_Val, 7);
    lv_obj_set_align(ui_Label_CPU_Usage_Val, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_CPU_Usage_Val, "50%");
    lv_obj_set_style_text_font(ui_Label_CPU_Usage_Val, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_CPU_Usage = lv_label_create(ui_Arc_CPU_Usage);
    lv_obj_set_height(ui_Label_CPU_Usage, 14);
    lv_obj_set_width(ui_Label_CPU_Usage, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Label_CPU_Usage, 0);
    lv_obj_set_y(ui_Label_CPU_Usage, -15);
    lv_obj_set_align(ui_Label_CPU_Usage, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_CPU_Usage, "Usage");
    lv_obj_set_style_text_color(ui_Label_CPU_Usage, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_CPU_Usage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_CPU_Usage, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_CPU_Usage, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_GPU = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label_GPU, 24);
    lv_obj_set_height(ui_Label_GPU, 72);
    lv_obj_set_x(ui_Label_GPU, 40);
    lv_obj_set_y(ui_Label_GPU, 183);
    lv_label_set_text(ui_Label_GPU, "G\nP\nU");
    lv_obj_set_style_text_align(ui_Label_GPU, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_GPU, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_GPU_Tem = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_Arc_GPU_Tem, 130);
    lv_obj_set_height(ui_Arc_GPU_Tem, 130);
    lv_obj_set_x(ui_Arc_GPU_Tem, 100);
    lv_obj_set_y(ui_Arc_GPU_Tem, 164);
    lv_arc_set_value(ui_Arc_GPU_Tem, 75);
    lv_obj_set_style_radius(ui_Arc_GPU_Tem, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc_GPU_Tem, 20, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc_GPU_Tem, lv_color_hex(0x3CD7EC), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc_GPU_Tem, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc_GPU_Tem, 20, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc_GPU_Tem, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_GPU_Tem, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc_GPU_Tem, -1, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc_GPU_Tem, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc_GPU_Tem, -1, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc_GPU_Tem, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label_GPU_Tem_Val = lv_label_create(ui_Arc_GPU_Tem);
    lv_obj_set_width(ui_Label_GPU_Tem_Val, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_GPU_Tem_Val, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_GPU_Tem_Val, 0);
    lv_obj_set_y(ui_Label_GPU_Tem_Val, 7);
    lv_obj_set_align(ui_Label_GPU_Tem_Val, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_GPU_Tem_Val, "50°C");
    lv_obj_set_style_text_font(ui_Label_GPU_Tem_Val, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_GPU_Tem = lv_label_create(ui_Arc_GPU_Tem);
    lv_obj_set_height(ui_Label_GPU_Tem, 14);
    lv_obj_set_width(ui_Label_GPU_Tem, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Label_GPU_Tem, 0);
    lv_obj_set_y(ui_Label_GPU_Tem, -15);
    lv_obj_set_align(ui_Label_GPU_Tem, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_GPU_Tem, "Tem\n");
    lv_obj_set_style_text_color(ui_Label_GPU_Tem, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_GPU_Tem, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_GPU_Tem, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_GPU_Tem, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_GPU_Usage = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_Arc_GPU_Usage, 130);
    lv_obj_set_height(ui_Arc_GPU_Usage, 130);
    lv_obj_set_x(ui_Arc_GPU_Usage, 285);
    lv_obj_set_y(ui_Arc_GPU_Usage, 164);
    lv_arc_set_value(ui_Arc_GPU_Usage, 75);
    lv_obj_set_style_radius(ui_Arc_GPU_Usage, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc_GPU_Usage, 20, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc_GPU_Usage, lv_color_hex(0x3CD7EC), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc_GPU_Usage, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc_GPU_Usage, 20, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc_GPU_Usage, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_GPU_Usage, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc_GPU_Usage, -1, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc_GPU_Usage, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc_GPU_Usage, -1, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc_GPU_Usage, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label_GPU_Usage_Val = lv_label_create(ui_Arc_GPU_Usage);
    lv_obj_set_width(ui_Label_GPU_Usage_Val, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_GPU_Usage_Val, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_GPU_Usage_Val, 0);
    lv_obj_set_y(ui_Label_GPU_Usage_Val, 7);
    lv_obj_set_align(ui_Label_GPU_Usage_Val, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_GPU_Usage_Val, "50%");
    lv_obj_set_style_text_font(ui_Label_GPU_Usage_Val, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_GPU_Usage = lv_label_create(ui_Arc_GPU_Usage);
    lv_obj_set_height(ui_Label_GPU_Usage, 14);
    lv_obj_set_width(ui_Label_GPU_Usage, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Label_GPU_Usage, 0);
    lv_obj_set_y(ui_Label_GPU_Usage, -15);
    lv_obj_set_align(ui_Label_GPU_Usage, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_GPU_Usage, "Usage");
    lv_obj_set_style_text_color(ui_Label_GPU_Usage, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_GPU_Usage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_GPU_Usage, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_GPU_Usage, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button1 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button1, 70);
    lv_obj_set_height(ui_Button1, 25);
    lv_obj_set_align(ui_Button1, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button1, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0x3CD7EC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Button1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Button1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Button1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "NEXT");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_GPU_Usage1 = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_Arc_GPU_Usage1, 130);
    lv_obj_set_height(ui_Arc_GPU_Usage1, 130);
    lv_obj_set_x(ui_Arc_GPU_Usage1, 285);
    lv_obj_set_y(ui_Arc_GPU_Usage1, 164);
    lv_arc_set_value(ui_Arc_GPU_Usage1, 75);
    lv_obj_set_style_radius(ui_Arc_GPU_Usage1, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc_GPU_Usage1, 20, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc_GPU_Usage1, lv_color_hex(0x3CD7EC), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc_GPU_Usage1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc_GPU_Usage1, 20, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc_GPU_Usage1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_GPU_Usage1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc_GPU_Usage1, -1, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc_GPU_Usage1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc_GPU_Usage1, -1, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc_GPU_Usage1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label_GPU_Usage_Val1 = lv_label_create(ui_Arc_GPU_Usage1);
    lv_obj_set_width(ui_Label_GPU_Usage_Val1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_GPU_Usage_Val1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_GPU_Usage_Val1, 0);
    lv_obj_set_y(ui_Label_GPU_Usage_Val1, 7);
    lv_obj_set_align(ui_Label_GPU_Usage_Val1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_GPU_Usage_Val1, "50%");
    lv_obj_set_style_text_font(ui_Label_GPU_Usage_Val1, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_GPU_Usage1 = lv_label_create(ui_Arc_GPU_Usage1);
    lv_obj_set_height(ui_Label_GPU_Usage1, 14);
    lv_obj_set_width(ui_Label_GPU_Usage1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Label_GPU_Usage1, 0);
    lv_obj_set_y(ui_Label_GPU_Usage1, -15);
    lv_obj_set_align(ui_Label_GPU_Usage1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_GPU_Usage1, "Usage");
    lv_obj_set_style_text_color(ui_Label_GPU_Usage1, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_GPU_Usage1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_GPU_Usage1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_GPU_Usage1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

}
