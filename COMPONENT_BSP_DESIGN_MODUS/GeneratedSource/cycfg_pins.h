/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.4.0.5972
* mtb-pdl-cat1 2.4.0.13881
* personalities 6.0.0.0
* udd 3.0.0.1974
*
********************************************************************************
* Copyright 2022 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#include "cycfg_routing.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)

#if defined(__cplusplus)
extern "C" {
#endif

#if defined (CY_USING_HAL)
    #define CYBSP_A1 (P0_0)
    #define CYBSP_LED_RGB_GREEN CYBSP_A1
    #define CYBSP_USER_LED2 CYBSP_A1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A0 (P0_1)
    #define CYBSP_LED_RGB_RED CYBSP_A0
    #define CYBSP_USER_LED CYBSP_A0
    #define CYBSP_USER_LED1 CYBSP_A0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A2 (P10_0)
    #define CYBSP_LED_RGB_BLUE CYBSP_A2
    #define CYBSP_USER_LED3 CYBSP_A2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A3 (P10_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A4 (P10_4)
    #define CYBSP_D24 CYBSP_A4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A5 (P10_5)
    #define CYBSP_D25 CYBSP_A5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D11 (P11_2)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_TRUSTB_SWI (P11_3)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_RADAR_RST (P11_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_RADAR_EN_LDO (P11_5)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_DEBUG_UART_RX (P5_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_DEBUG_UART_TX (P5_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D5 (P5_6)
    #define CYBSP_USER_BTN CYBSP_D5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D9 (P6_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D6 (P6_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_RADAR_IRQ (P6_2)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D10 (P6_3)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2C_SCL (P6_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2C_SDA (P6_5)
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDIO_ENABLED 1U
#define CYBSP_SWDIO_PORT GPIO_PRT6
#define CYBSP_SWDIO_PORT_NUM 6U
#define CYBSP_SWDIO_PIN 6U
#define CYBSP_SWDIO_NUM 6U
#define CYBSP_SWDIO_DRIVEMODE CY_GPIO_DM_PULLUP
#define CYBSP_SWDIO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_6_HSIOM
    #define ioss_0_port_6_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDIO_HSIOM ioss_0_port_6_pin_6_HSIOM
#define CYBSP_SWDIO_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_PORT_PIN P6_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO P6_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDCK_ENABLED 1U
#define CYBSP_SWDCK_PORT GPIO_PRT6
#define CYBSP_SWDCK_PORT_NUM 6U
#define CYBSP_SWDCK_PIN 7U
#define CYBSP_SWDCK_NUM 7U
#define CYBSP_SWDCK_DRIVEMODE CY_GPIO_DM_PULLDOWN
#define CYBSP_SWDCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_7_HSIOM
    #define ioss_0_port_6_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDCK_HSIOM ioss_0_port_6_pin_7_HSIOM
#define CYBSP_SWDCK_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_PORT_PIN P6_7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK P6_7
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLDOWN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_MOSI (P7_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_MISO (P7_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_CLK (P7_2)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_CS (P7_3)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_RADAR_SPI_MOSI (P9_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_RADAR_SPI_MISO (P9_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_RADAR_SPI_CLK (P9_2)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_RADAR_SPI_CS (P9_3)
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_SWDIO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t CYBSP_SWDCK_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
