#include "ConfigADC.h"

uint16_t averageVoltage(ADC_HandleTypeDef *hadc1)
{
	uint16_t result;
	volatile uint16_t voltageSample[3] = {0,};

	voltageSample[0] = HAL_ADCEx_InjectedGetValue(hadc1, ADC_INJECTED_RANK_1);
	voltageSample[1] = HAL_ADCEx_InjectedGetValue(hadc1, ADC_INJECTED_RANK_1);
	voltageSample[2] = HAL_ADCEx_InjectedGetValue(hadc1, ADC_INJECTED_RANK_1);

	result = (voltageSample[0] + voltageSample[1] + voltageSample[2])/(sizeof(voltageSample)/sizeof(uint16_t));

	return result;
}

uint16_t averageCurrent(ADC_HandleTypeDef *hadc1)
{
	uint16_t result;
	volatile uint16_t currentSample[3] = {0,};

	currentSample[0] = HAL_ADCEx_InjectedGetValue(hadc1, ADC_INJECTED_RANK_2);
	currentSample[1] = HAL_ADCEx_InjectedGetValue(hadc1, ADC_INJECTED_RANK_2);
	currentSample[2] = HAL_ADCEx_InjectedGetValue(hadc1, ADC_INJECTED_RANK_2);

	result = (currentSample[0] + currentSample[1] + currentSample[2])/(sizeof(currentSample)/sizeof(uint16_t));

	return result;
}
