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
	return 3.3*averageData/4096;
}
