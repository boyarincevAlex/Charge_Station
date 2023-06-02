################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../AnalogDigitalConverter/Src/ConfigADC.c 

OBJS += \
./AnalogDigitalConverter/Src/ConfigADC.o 

C_DEPS += \
./AnalogDigitalConverter/Src/ConfigADC.d 


# Each subdirectory must supply rules for building sources it contributes
AnalogDigitalConverter/Src/%.o AnalogDigitalConverter/Src/%.su AnalogDigitalConverter/Src/%.cyclo: ../AnalogDigitalConverter/Src/%.c AnalogDigitalConverter/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Diplom/Charge_Station/AnalogDigitalConverter/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-AnalogDigitalConverter-2f-Src

clean-AnalogDigitalConverter-2f-Src:
	-$(RM) ./AnalogDigitalConverter/Src/ConfigADC.cyclo ./AnalogDigitalConverter/Src/ConfigADC.d ./AnalogDigitalConverter/Src/ConfigADC.o ./AnalogDigitalConverter/Src/ConfigADC.su

.PHONY: clean-AnalogDigitalConverter-2f-Src

