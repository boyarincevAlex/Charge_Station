#ifndef __CONFIGADC_H
#define __CONFIGADC_H

#include "stm32f1xx_hal.h"

uint16_t averageAll(const uint16_t data[]);

uint16_t adcToDutyCycle(uint16_t averageData);

#endif // __CONFIGADC_H
