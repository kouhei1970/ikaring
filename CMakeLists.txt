cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(ikaring C CXX ASM)
set(CMAKE_C_STNDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(PICO_EXAMPLES_PATH ${PROJECT_SOURCE_DIR})

pico_sdk_init()
include_directories(/Users/itoukouhei/pico/eigen)

add_executable(ikaring
  pico_copter.cpp
  sensor.cpp
  ekf.cpp
  lsm9ds1_reg.c
  pwm.cpp
  radio.cpp
  control.cpp
  WS2812.cpp
  rgbled.cpp
  i2c.cpp
)
pico_generate_pio_header(ikaring ${CMAKE_CURRENT_LIST_DIR}/WS2812.pio)

target_link_libraries(ikaring 
  hardware_spi 
  hardware_pwm 
  hardware_uart 
  pico_stdlib
  hardware_pio
  hardware_i2c
  pico_multicore)

pico_enable_stdio_usb(ikaring 1)
pico_enable_stdio_uart(ikaring 0)

pico_add_extra_outputs(ikaring)

