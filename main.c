
/* Includes ------------------------------------------------------------------*/
#include "stm8s.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Evalboard I/Os configuration */

#define LED_GPIO_PORT  (GPIOB)
#define LED_GPIO_PINS  (GPIO_PIN_5)
#define KEY_GPIO_PORT  (GPIOC)
#define KEY_GPIO_PIN   (GPIO_PIN_3)


/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
void Delay (uint16_t nCount);

/* Private functions ---------------------------------------------------------*/
/* Public functions ----------------------------------------------------------*/

/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */
void main(void)
{

  /* Initialize I/Os in Output Mode */
  GPIO_Init(LED_GPIO_PORT, LED_GPIO_PINS, GPIO_MODE_OUT_PP_HIGH_FAST);
  GPIO_Init(KEY_GPIO_PORT, KEY_GPIO_PIN, GPIO_MODE_IN_PU_IT);
  EXTI_DeInit();
  EXTI_SetExtIntSensitivity(EXTI_PORT_GPIOC, EXTI_SENSITIVITY_FALL_ONLY);
  enableInterrupts();
  while(1)
  {
    
  }
  
  
//  while (1)
//  {
//    
//      if(GPIO_ReadInputPin(KEY_GPIO_PORT, KEY_GPIO_PIN) == 0)
//    {
//      Delay(100);
//      if(GPIO_ReadInputPin(KEY_GPIO_PORT, KEY_GPIO_PIN) == 0)
//      {
//        GPIO_WriteHigh(LED_GPIO_PORT, LED_GPIO_PINS);
//      }
//    }
//    else
//    {
//      Delay(100);
//      if(GPIO_ReadInputPin(KEY_GPIO_PORT, KEY_GPIO_PIN) != 1)
//      {
//        GPIO_WriteLow(LED_GPIO_PORT, LED_GPIO_PINS);
//      }
//    }
//    
//  }

}

/**
  * @brief Delay
  * @param nCount
  * @retval None
  */
void Delay(uint16_t nCount)
{
  /* Decrement nCount value */
  while (nCount != 0)
  {
    nCount--;
  }
}

#ifdef USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *   where the assert_param error has occurred.
  * @param file: pointer to the source file name
  * @param line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
