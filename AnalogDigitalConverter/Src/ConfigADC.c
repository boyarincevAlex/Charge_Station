#include "ConfigADC.h"

uint16_t averageAll(const uint16_t data[])
{
  int sumOfElements = 0;
  size_t size = sizeof(data)/sizeof(data[0]);
  for(size_t i = 0; i < size; ++i)
  {
    sumOfElements += data[i];
  }

  uint16_t result = sumOfElements / size;
  return result;
}

uint16_t adcToDutyCycle(uint16_t averageData)
{
	uint16_t result;

	uint16_t R1 = 1; 	//1 kOm 	Параметры делителя напряжения
	uint16_t R2 = 100;	//100 kOm
	uint16_t divider = 100/1;

	uint16_t coef = 3.3*(65/divider);
	result = (averageData*coef)/25.3;

	return result;
}
