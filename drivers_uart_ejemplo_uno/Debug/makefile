################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: drivers_uart_ejemplo_uno.axf

# Tool invocations
drivers_uart_ejemplo_uno.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"C:\proyectos_mios\CMSISv2p00_LPC17xx\Debug" -Xlinker -Map="drivers_uart_ejemplo_uno.map" -Xlinker --gc-sections -mcpu=cortex-m3 -mthumb -T "drivers_uart_ejemplo_uno_Debug.ld" -o "drivers_uart_ejemplo_uno.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) drivers_uart_ejemplo_uno.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "drivers_uart_ejemplo_uno.axf"; # arm-none-eabi-objcopy -v -O binary "drivers_uart_ejemplo_uno.axf" "drivers_uart_ejemplo_uno.bin" ; # checksum -p LPC1769 -d "drivers_uart_ejemplo_uno.bin";
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
