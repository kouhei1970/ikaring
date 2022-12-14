#ifndef RADIO_HPP
#define RADIO_HPP

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/uart.h"
#include "hardware/irq.h"

#define UART_ID uart0
#define BAUD_RATE 100000
#define DATA_BITS 8
#define STOP_BITS 2
#define PARITY UART_PARITY_EVEN
#define CH1MAX 1680
#define CH1MIN 368
#define CH2MAX 1680
#define CH2MIN 368
#define CH3MAX 1638
#define CH3MIN 368
#define CH4MAX 1638
#define CH4MIN 368
#define CH5MAX 1638
#define CH5MIN 368
#define CH6MAX 1638
#define CH6MIN 368
#define SERVO_MIN 144
#define SERVO_MAX 1904

#define MODE_SW 4
#define LANDING_SW 5
#define LOG 8
#define SERVO 7


//０番と1番ピンに接続
#define UART_TX_PIN 0
#define UART_RX_PIN 1

//グローバル変数の宣言
extern uint16_t Chdata[18];
extern uint16_t Safty_flag;

//グローバル関数の宣言
void radio_init(void);
void channel_output(void);

#endif