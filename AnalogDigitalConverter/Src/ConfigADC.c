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

double adcToVoltage(const uint16_t averageData)
{
	double result;

	uint16_t R1 = 1; 	//1 kOm 	Параметры делителя напряжения
	uint16_t R2 = 100;	//100 kOm
	uint16_t divider = 100/1;

	double coef = 3.3/4096;
	result = averageData*coef;

	return result;
}

double voltageToDutyCycle(const double outputDutyCycle)
{
	double result;

	double coef = 3.3/162;
	result = outputDutyCycle*coef;

	return result;
}
