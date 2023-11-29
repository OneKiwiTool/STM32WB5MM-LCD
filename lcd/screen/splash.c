#include "screen.h"

void screen_splash(void)
{
    ST7789_Init();
    ST7789_Fill_Color(BLACK);
    HAL_Delay(200);
    ST7789_DrawImage(25, 111, 120, 96, splash1);
    HAL_Delay(200);
    //ST7789_DrawImage(25, 111, 120, 96, splash2);
    //HAL_Delay(200);
    ST7789_DrawImage(25, 111, 120, 96, splash3);
    HAL_Delay(200);
    //ST7789_DrawImage(25, 111, 120, 96, splash4);
    //HAL_Delay(200);
    ST7789_DrawImage(25, 111, 120, 96, splash5);
    HAL_Delay(200);
    //ST7789_DrawImage(25, 111, 120, 96, splash6);
    //HAL_Delay(200);
    ST7789_DrawImage(25, 111, 120, 96, splash7);
    HAL_Delay(200);
    //ST7789_DrawImage(25, 111, 120, 96, splash8);
    //HAL_Delay(200);
    ST7789_DrawImage(25, 111, 120, 96, splash9);
    HAL_Delay(1000);
}
