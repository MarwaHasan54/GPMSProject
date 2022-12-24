################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Logic.cpp \
../src/SlaveManager.cpp \
../src/TransportManager.cpp \
../src/gpmsProject.cpp \
../src/tcp.cpp 

CPP_DEPS += \
./src/Logic.d \
./src/SlaveManager.d \
./src/TransportManager.d \
./src/gpmsProject.d \
./src/tcp.d 

OBJS += \
./src/Logic.o \
./src/SlaveManager.o \
./src/TransportManager.o \
./src/gpmsProject.o \
./src/tcp.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Logic.d ./src/Logic.o ./src/SlaveManager.d ./src/SlaveManager.o ./src/TransportManager.d ./src/TransportManager.o ./src/gpmsProject.d ./src/gpmsProject.o ./src/tcp.d ./src/tcp.o

.PHONY: clean-src

