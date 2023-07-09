#include "screen.h"

void screen_home(void)
{
    ST7789_Fill_Color(WHITE);
    ST7789_DrawImage(10, 0, 24, 24, bluetooth);
    //ST7789_DrawFilledRectangle(10, 0, 24, 24, BLACK);
}