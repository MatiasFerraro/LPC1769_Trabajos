################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/SD/ccsbcs.c \
../src/SD/comm.c \
../src/SD/diskio.c \
../src/SD/fattime.c \
../src/SD/ff.c \
../src/SD/ff_test_term.c \
../src/SD/init.c \
../src/SD/lpc17xx_clkpwr.c \
../src/SD/lpc17xx_gpio.c \
../src/SD/lpc17xx_libcfg_default.c \
../src/SD/lpc17xx_nvic.c \
../src/SD/lpc17xx_pinsel.c \
../src/SD/lpc17xx_rtc.c \
../src/SD/lpc17xx_ssp.c \
../src/SD/lpc17xx_uart.c \
../src/SD/monitor.c \
../src/SD/rtc_cal.c \
../src/SD/spi_sd_lpc17xx.c \
../src/SD/uart.c 

OBJS += \
./src/SD/ccsbcs.o \
./src/SD/comm.o \
./src/SD/diskio.o \
./src/SD/fattime.o \
./src/SD/ff.o \
./src/SD/ff_test_term.o \
./src/SD/init.o \
./src/SD/lpc17xx_clkpwr.o \
./src/SD/lpc17xx_gpio.o \
./src/SD/lpc17xx_libcfg_default.o \
./src/SD/lpc17xx_nvic.o \
./src/SD/lpc17xx_pinsel.o \
./src/SD/lpc17xx_rtc.o \
./src/SD/lpc17xx_ssp.o \
./src/SD/lpc17xx_uart.o \
./src/SD/monitor.o \
./src/SD/rtc_cal.o \
./src/SD/spi_sd_lpc17xx.o \
./src/SD/uart.o 

C_DEPS += \
./src/SD/ccsbcs.d \
./src/SD/comm.d \
./src/SD/diskio.d \
./src/SD/fattime.d \
./src/SD/ff.d \
./src/SD/ff_test_term.d \
./src/SD/init.d \
./src/SD/lpc17xx_clkpwr.d \
./src/SD/lpc17xx_gpio.d \
./src/SD/lpc17xx_libcfg_default.d \
./src/SD/lpc17xx_nvic.d \
./src/SD/lpc17xx_pinsel.d \
./src/SD/lpc17xx_rtc.d \
./src/SD/lpc17xx_ssp.d \
./src/SD/lpc17xx_uart.d \
./src/SD/monitor.d \
./src/SD/rtc_cal.d \
./src/SD/spi_sd_lpc17xx.d \
./src/SD/uart.d 


# Each subdirectory must supply rules for building sources it contributes
src/SD/%.o: ../src/SD/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__CODE_RED -DCORE_M3 -D__USE_CMSIS=CMSISv2p00_LPC17xx -D__LPC17XX__ -D__REDLIB__ -I"C:\proyectos_mios\CMSISv2p00_LPC17xx\inc" -I"C:\proyectos_mios\drivers_tarjeta_sd\src\SD" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


