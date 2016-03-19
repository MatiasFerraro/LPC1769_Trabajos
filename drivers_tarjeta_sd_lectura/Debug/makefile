################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/SD/subdir.mk
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
all: drivers_tarjeta_sd_lectura.axf

# Tool invocations
drivers_tarjeta_sd_lectura.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"C:\proyectos_mios\CMSISv2p00_LPC17xx\Debug" -Xlinker -Map="drivers_tarjeta_sd_lectura.map" -Xlinker --gc-sections -mcpu=cortex-m3 -mthumb -T "drivers_tarjeta_sd_lectura_Debug.ld" -o "drivers_tarjeta_sd_lectura.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) drivers_tarjeta_sd_lectura.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "drivers_tarjeta_sd_lectura.axf"; # arm-none-eabi-objcopy -v -O binary "drivers_tarjeta_sd_lectura.axf" "drivers_tarjeta_sd_lectura.bin" ; # checksum -p LPC1769 -d "drivers_tarjeta_sd_lectura.bin";
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
