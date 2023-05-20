#include "ConfigADC.h"
#include "main.h"

extern volatile uint16_t adc[2];

void handlerADC(ADC_HandleTypeDef *hadc1)
{
   HAL_ADCEx_InjectedStart(hadc1); // запускаем опрос инжект. каналов
   HAL_ADCEx_InjectedPollForConversion(hadc1,100); // ждём окончания

   // результат опроса каждого канала записывается в свой регистр, а мы забираем его и копируем в переменную
   adc[0] = HAL_ADCEx_InjectedGetValue(hadc1, ADC_INJECTED_RANK_1);
   adc[1] = HAL_ADCEx_InjectedGetValue(hadc1, ADC_INJECTED_RANK_2);
}
