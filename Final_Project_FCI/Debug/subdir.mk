################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Buttons.c \
../EXT_INT1.c \
../Keypad.c \
../LCD.c \
../Leds.c \
../Seven_seg.c \
../Timer.c \
../main.c 

OBJS += \
./Buttons.o \
./EXT_INT1.o \
./Keypad.o \
./LCD.o \
./Leds.o \
./Seven_seg.o \
./Timer.o \
./main.o 

C_DEPS += \
./Buttons.d \
./EXT_INT1.d \
./Keypad.d \
./LCD.d \
./Leds.d \
./Seven_seg.d \
./Timer.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


