#include "main.h"
#include "board.h"
#include "screen.h"

#include <stdio.h>

int main(void)
{
    board_init();
    printf("\nStart Program!\n");

    ST7789_Init();
    ST7789_Fill_Color(BLACK);
    HAL_Delay(200);

    HAL_Delay(1000);

    screen_splash();
    screen_home();

    HAL_Delay(2000);
    screen_setting();

    HAL_Delay(2000);
    screen_pair();

    HAL_Delay(2000);
    screen_info();

    HAL_Delay(2000);
    screen_pairing();

    screen_paired();

    while (1)
    {
		//screen_splash();
		//screen_home();
		//HAL_Delay(1000);
    }
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
}
#endif /* USE_FULL_ASSERT */
