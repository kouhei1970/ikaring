#ifndef PICO_COPTER_HPP
#define PICO_COPTER_HPP

#include <string.h>
#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/multicore.h"
#include "pico/binary_info.h"
#include "sensor.hpp"
#include "ekf.hpp"
#include "pwm.hpp"
#include "radio.hpp"
#include "control.hpp"
#include "i2c.hpp"
#include "rgbled.hpp"
#include <math.h>

#define LED_PIN 25
//#define I2C_SDA 26
#define MAINLOOP loop_400Hz


//グローバル変数
extern uint8_t Arm_flag;
extern semaphore_t sem;
extern uint8_t Red_flag;

#endif

