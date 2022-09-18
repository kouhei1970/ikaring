#ifndef RGBLED_HPP
#define RGBLED_HPP

#include "WS2812.hpp"

#define RGBLED_PIN 16
#define RGBLED_LENGTH 10

void rgbled_off(void);
void rgbled_normal(void);
void rgbled_green(void);
void rgbled_red(void);
void rgbled_orange(void);
void rgbled_switch(uint8_t);
void rgbled_wait(void);
void rgbled_rocking(void);


#endif
