################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../panic.c \
../panic.mod.c 

O_SRCS += \
../panic.mod.o \
../panic.o 

OBJS += \
./panic.o \
./panic.mod.o 

C_DEPS += \
./panic.d \
./panic.mod.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	arm-linux-gnueabihf-gcc -D__KERNEL__ -I/home/nanker/Embedded/buildroot/dl/linux/git/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


