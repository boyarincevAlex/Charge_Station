################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Regulator/Src/pid.c 

OBJS += \
./Regulator/Src/pid.o 

C_DEPS += \
./Regulator/Src/pid.d 


# Each subdirectory must supply rules for building sources it contributes
Regulator/Src/%.o Regulator/Src/%.su Regulator/Src/%.cyclo: ../Regulator/Src/%.c Regulator/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/code/CubeIDE_Repositories/Charge_Station/AnalogDigitalConverter/Inc" -I"C:/code/CubeIDE_Repositories/Charge_Station/Regulator/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Regulator-2f-Src

clean-Regulator-2f-Src:
	-$(RM) ./Regulator/Src/pid.cyclo ./Regulator/Src/pid.d ./Regulator/Src/pid.o ./Regulator/Src/pid.su

.PHONY: clean-Regulator-2f-Src

