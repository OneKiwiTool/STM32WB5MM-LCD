#include "screen.h"

void screen_splash(void)
{
    ST7789_Init();
    ST7789_DrawImage(15, 90, 140, 140, skua);
    for(uint8_t i = 5; i < 160; i++){
        ST7789_DrawLine(i, 300, i, 305, BLACK);
        HAL_Delay(10);
    }
}