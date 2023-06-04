#ifndef __BOARD_H
#define __BOARD_H

#define DC_PIN      GPIO_PIN_8
#define DC_PORT     GPIOB
#define RST_PIN     GPIO_PIN_9
#define RST_PORT    GPIOB
#define CS_PIN      GPIO_PIN_10
#define CS_PORT     GPIOC

void board_init(void);

#endif /* __BOARD_H */
