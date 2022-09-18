#ifndef I2C_HPP
#define I2C_HPP

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/i2c.h"
#include "pico/binary_info.h"
#include "rgbled.hpp"
#include "pico_copter.hpp"

#define I2C_PORT i2c1
#define OPENMV_ADDRESS 0x12
#define i2C_CLOCK (400*1000)
#define NORMAL_WAIT 500
#define SDA_PIN 26  // GP27 = Pin.31 = SDA
#define SCL_PIN 27  // GP26 = Pin.32 = SCL

void copter_i2c_init(void);
void read_red_sign(void);

#endif