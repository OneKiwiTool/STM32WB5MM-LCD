#include "screen.h"
#include "color.h"

void screen_home(void)
{
    ST7789_Fill_Color(BLACK);
    screen_home_top("Home", "100", 1);
    screen_home_level(3);
    screen_home_battery("98 %", COLOR_GREEN);
    screen_home_deep("10 m", COLOR_ORANGE);
}

void screen_home_top(char *title, char *bat, uint8_t blue)
{
    ST7789_Fill(0, 0, 171, 31, COLOR_GRAY);
    ST7789_DrawImage(144, 4, 24, 24, battery);
    ST7789_WriteString(120, 10, bat, &Font12, COLOR_GRAY, WHITE);
    if(blue > 0){
        ST7789_DrawImage(94, 4, 24, 24, bluetooth);
    }
    ST7789_WriteString(10, 10, title, &Font12, COLOR_GRAY, WHITE);
    
}

void screen_home_level(uint8_t level)
{
    switch (level)
    {
    case 1:
        ST7789_DrawFilledRectangle(6, 39, 26, 6, COLOR_GREEN); 
        ST7789_DrawFilledRectangle(38, 39, 26, 6, COLOR_GRAY); 
        ST7789_DrawFilledRectangle(70, 39, 26, 6, COLOR_GRAY); 
        ST7789_DrawFilledRectangle(102, 39, 26, 6, COLOR_GRAY); 
        ST7789_DrawFilledRectangle(134, 39, 26, 6, COLOR_GRAY); 
        break;
    
    case 2:
        ST7789_DrawFilledRectangle(6, 39, 26, 6, COLOR_GREEN); 
        ST7789_DrawFilledRectangle(38, 39, 26, 6, COLOR_GREEN); 
        ST7789_DrawFilledRectangle(70, 39, 26, 6, COLOR_GRAY); 
        ST7789_DrawFilledRectangle(102, 39, 26, 6, COLOR_GRAY); 
        ST7789_DrawFilledRectangle(134, 39, 26, 6, COLOR_GRAY); 
        break;
    case 3:
        ST7789_DrawFilledRectangle(6, 39, 26, 6, COLOR_GREEN); 
        ST7789_DrawFilledRectangle(38, 39, 26, 6, COLOR_GREEN); 
        ST7789_DrawFilledRectangle(70, 39, 26, 6, COLOR_GREEN); 
        ST7789_DrawFilledRectangle(102, 39, 26, 6, COLOR_GRAY); 
        ST7789_DrawFilledRectangle(134, 39, 26, 6, COLOR_GRAY); 
        break;
    case 4:
        ST7789_DrawFilledRectangle(6, 39, 26, 6, COLOR_GREEN); 
        ST7789_DrawFilledRectangle(38, 39, 26, 6, COLOR_GREEN); 
        ST7789_DrawFilledRectangle(70, 39, 26, 6, COLOR_GREEN); 
        ST7789_DrawFilledRectangle(102, 39, 26, 6, COLOR_GREEN); 
        ST7789_DrawFilledRectangle(134, 39, 26, 6, COLOR_GRAY); 
        break;
    case 5:
        ST7789_DrawFilledRectangle(6, 39, 26, 6, COLOR_GREEN); 
        ST7789_DrawFilledRectangle(38, 39, 26, 6, COLOR_GREEN); 
        ST7789_DrawFilledRectangle(70, 39, 26, 6, COLOR_GREEN); 
        ST7789_DrawFilledRectangle(102, 39, 26, 6, COLOR_GREEN); 
        ST7789_DrawFilledRectangle(134, 39, 26, 6, COLOR_GREEN); 
        break;
    }
}

void screen_home_battery(char *bat, uint16_t color)
{
    ST7789_DrawFilledRectangle(3, 208, 166, 48, color);
    ST7789_WriteString(20, 222, bat, &Font20, color, BLACK);
}

void screen_home_deep(char *met, uint16_t color)
{
    ST7789_DrawFilledRectangle(3, 264, 166, 48, color);
    ST7789_WriteString(20, 278, met, &Font20, color, BLACK);
    //ST7789_DrawFilledRectangleCorner(3, 264, 166, 48, 8, COLOR_GREEN);
}

///////////

void screen_setting(void)
{
    ST7789_Fill_Color(BLACK);
    screen_home_top("Setting", "98", 1);
    screen_setting_pair(0);
    screen_setting_unit(1, "Unit: Km/h");
    screen_setting_system(0);
    screen_setting_bottom("Open");
}

void screen_setting_pair(uint8_t select)
{
    if(select > 0){
        ST7789_DrawFilledRectangle(0, 40, 172, 48, COLOR_GREEN);
        ST7789_WriteString(4, 54, "Pair remote", &Font20, COLOR_GREEN, BLACK);
    } else {
        ST7789_DrawFilledRectangle(0, 40, 172, 48, COLOR_GRAY);
        ST7789_WriteString(4, 54, "Pair remote", &Font20, COLOR_GRAY, WHITE);
    }
    
}

void screen_setting_unit(uint8_t select, char *unit)
{
    if(select > 0){
        ST7789_DrawFilledRectangle(0, 96, 172, 48, COLOR_GREEN);
        ST7789_WriteString(4, 110, "Unit: Km/h", &Font20, COLOR_GREEN, BLACK);
    } else {
        ST7789_DrawFilledRectangle(0, 96, 172, 48, COLOR_GRAY);
        ST7789_WriteString(4, 110, "Unit: Km/h", &Font20, COLOR_GRAY, WHITE);
    }
}

void screen_setting_system(uint8_t select)
{
    if(select > 0){
        ST7789_DrawFilledRectangle(0, 152, 172, 48, COLOR_GREEN);
        ST7789_WriteString(4, 166, "System info", &Font20, COLOR_GREEN, BLACK);
    } else {
        ST7789_DrawFilledRectangle(0, 152, 172, 48, COLOR_GRAY);
        ST7789_WriteString(4, 166, "System info", &Font20, COLOR_GRAY, WHITE);
    }
    
}

void screen_setting_bottom(char *text)
{
    ST7789_DrawFilledRectangle(0, 272, 172, 48, COLOR_GRAY);
    ST7789_WriteString(40, 284, text, &Font24, COLOR_GRAY, COLOR_GREEN);
}


///

void screen_pair(void)
{
    ST7789_Fill_Color(BLACK);
    screen_home_top("Pair", "98", 1);
    screen_pair_device1(1, "Skua 1");
    screen_pair_device2(0, "Skua 2");
    screen_setting_bottom("Pair");
}

void screen_pair_device1(uint8_t select, char *text)
{
    if(select > 0){
        ST7789_DrawFilledRectangle(0, 40, 172, 48, COLOR_GREEN);
        ST7789_WriteString(4, 54, text, &Font20, COLOR_GREEN, BLACK);
    } else {
        ST7789_DrawFilledRectangle(0, 40, 172, 48, COLOR_GRAY);
        ST7789_WriteString(4, 54, text, &Font20, COLOR_GRAY, WHITE);
    }
    
}

void screen_pair_device2(uint8_t select, char *text)
{
    if(select > 0){
        ST7789_DrawFilledRectangle(0, 96, 172, 48, COLOR_GREEN);
        ST7789_WriteString(4, 110, text, &Font20, COLOR_GREEN, BLACK);
    } else {
        ST7789_DrawFilledRectangle(0, 96, 172, 48, COLOR_GRAY);
        ST7789_WriteString(4, 110, text, &Font20, COLOR_GRAY, WHITE);
    }
}

///

void screen_info(void)
{
    ST7789_Fill_Color(BLACK);
    screen_home_top("Info", "88", 1);
    ST7789_WriteString(5, 40, "ID", &Font24, BLACK, WHITE);
    ST7789_WriteString(5, 65, "000 000000", &Font16, BLACK, WHITE);
    ST7789_WriteString(5, 90, "Version", &Font24, BLACK, WHITE);
    ST7789_WriteString(5, 115, "1.0.2", &Font16, BLACK, WHITE);
    ST7789_WriteString(5, 140, "SN", &Font24, BLACK, WHITE);
    ST7789_WriteString(5, 165, "000000", &Font16, BLACK, WHITE);
    screen_setting_bottom("Back");
}

void screen_pairing(void)
{
    ST7789_Fill_Color(BLACK);
    screen_home_top("Pairing", "88", 0);
    screen_setting_bottom("Pairing");
    for(uint8_t i = 0; i <30; i++){
        ST7789_DrawImage(37, 111, 98, 98, loading00);
        HAL_Delay(50);
        ST7789_DrawImage(37, 111, 98, 98, loading90);
        HAL_Delay(50);
        ST7789_DrawImage(37, 111, 98, 98, loading180);
        HAL_Delay(50);
        ST7789_DrawImage(37, 111, 98, 98, loading270);
        HAL_Delay(50);
    }
}


void screen_paired(void)
{
    ST7789_Fill_Color(BLACK);
    screen_home_top("Pairing", "88", 1);
    ST7789_DrawImage(37, 111, 98, 98, done);
    screen_setting_bottom("Paired");
}