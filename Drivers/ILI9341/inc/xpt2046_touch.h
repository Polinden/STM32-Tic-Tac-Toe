extern SPI_HandleTypeDef hspi3;
#ifndef XPT2046_TOUCH_H_
#define XPT2046_TOUCH_H_


#define TOUCH_SPI_PTR 		 &hspi3
#define TOUCH_CS_SELECT      HAL_GPIO_WritePin(T_CS_GPIO_Port, T_CS_Pin, GPIO_PIN_RESET)
#define TOUCH_CS_UNSELECT    HAL_GPIO_WritePin(T_CS_GPIO_Port, T_CS_Pin, GPIO_PIN_SET)

uint8_t ILI9341_TouchGetCoordinates(uint16_t *x, uint16_t *y);

#endif
