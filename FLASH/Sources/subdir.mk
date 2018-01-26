################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Events.c" \
"../Sources/leds.c" \
"../Sources/main.c" \
"../Sources/os.c" \

C_SRCS += \
../Sources/Events.c \
../Sources/leds.c \
../Sources/main.c \
../Sources/os.c \

OBJS += \
./Sources/Events_c.obj \
./Sources/leds_c.obj \
./Sources/main_c.obj \
./Sources/os_c.obj \

OBJS_QUOTED += \
"./Sources/Events_c.obj" \
"./Sources/leds_c.obj" \
"./Sources/main_c.obj" \
"./Sources/os_c.obj" \

C_DEPS += \
./Sources/Events_c.d \
./Sources/leds_c.d \
./Sources/main_c.d \
./Sources/os_c.d \

C_DEPS_QUOTED += \
"./Sources/Events_c.d" \
"./Sources/leds_c.d" \
"./Sources/main_c.d" \
"./Sources/os_c.d" \

OBJS_OS_FORMAT += \
./Sources/Events_c.obj \
./Sources/leds_c.obj \
./Sources/main_c.obj \
./Sources/os_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/Events_c.obj: ../Sources/Events.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/Events.args" -ObjN="Sources/Events_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/%.d: ../Sources/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/leds_c.obj: ../Sources/leds.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/leds.args" -ObjN="Sources/leds_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/main_c.obj: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/main.args" -ObjN="Sources/main_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/os_c.obj: ../Sources/os.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/os.args" -ObjN="Sources/os_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '


