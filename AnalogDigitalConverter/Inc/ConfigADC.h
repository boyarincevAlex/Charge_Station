#ifndef __CONFIGADC_H
#define __CONFIGADC_H

#include "stm32f1xx_hal.h"

uint16_t averageAll(const uint16_t data);

uint16_t averageVoltage(ADC_HandleTypeDef *hadc1);

uint16_t averageCurrent(ADC_HandleTypeDef *hadc1);

#endif // __CONFIGADC_H
