/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define OLED_DC_Pin GPIO_PIN_13
#define OLED_DC_GPIO_Port GPIOC
#define KEY_0_Pin GPIO_PIN_14
#define KEY_0_GPIO_Port GPIOC
#define HC_Pin GPIO_PIN_15
#define HC_GPIO_Port GPIOC
#define ADC_Ai_Pin GPIO_PIN_0
#define ADC_Ai_GPIO_Port GPIOA
#define ADC_Bi_Pin GPIO_PIN_1
#define ADC_Bi_GPIO_Port GPIOA
#define ADC_Ci_Pin GPIO_PIN_2
#define ADC_Ci_GPIO_Port GPIOA
#define ADC_Au_Pin GPIO_PIN_3
#define ADC_Au_GPIO_Port GPIOA
#define ADC_Bu_Pin GPIO_PIN_4
#define ADC_Bu_GPIO_Port GPIOA
#define ADC_Cu_Pin GPIO_PIN_5
#define ADC_Cu_GPIO_Port GPIOA
#define HA_Pin GPIO_PIN_6
#define HA_GPIO_Port GPIOA
#define HB_Pin GPIO_PIN_7
#define HB_GPIO_Port GPIOA
#define NTC_ADC1_IN8_Pin GPIO_PIN_0
#define NTC_ADC1_IN8_GPIO_Port GPIOB
#define UPWR_ADC1_IN9_Pin GPIO_PIN_1
#define UPWR_ADC1_IN9_GPIO_Port GPIOB
#define LED_0_Pin GPIO_PIN_2
#define LED_0_GPIO_Port GPIOB
#define KEY_1_Pin GPIO_PIN_10
#define KEY_1_GPIO_Port GPIOB
#define KEY_2_Pin GPIO_PIN_12
#define KEY_2_GPIO_Port GPIOB
#define SPI_CS_Pin GPIO_PIN_15
#define SPI_CS_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
