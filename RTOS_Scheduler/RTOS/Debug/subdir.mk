################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../EXTINT_program.c \
../GIE_program.c \
../RTOS_program.c \
../TIMER0_program.c \
../lcd_programme.c \
../main.c \
../programme\ file.c \
../timer_programme.c 

OBJS += \
./EXTINT_program.o \
./GIE_program.o \
./RTOS_program.o \
./TIMER0_program.o \
./lcd_programme.o \
./main.o \
./programme\ file.o \
./timer_programme.o 

C_DEPS += \
./EXTINT_program.d \
./GIE_program.d \
./RTOS_program.d \
./TIMER0_program.d \
./lcd_programme.d \
./main.d \
./programme\ file.d \
./timer_programme.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

programme\ file.o: ../programme\ file.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"programme file.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


