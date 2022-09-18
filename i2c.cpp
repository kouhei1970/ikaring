#include "i2c.hpp"



void copter_i2c_init(void)
{
    i2c_init(I2C_PORT,i2C_CLOCK);//ハードウェアの初期化
    gpio_set_function(SDA_PIN,GPIO_FUNC_I2C);//GPIO機能をi2cに選択(SDA)
    gpio_set_function(SCL_PIN,GPIO_FUNC_I2C);//GPIO機能をi2cに選択(SCL)
    gpio_set_pulls(SDA_PIN, true, false);   // enable internal pull-up of SDA_PIN=GP26
    gpio_set_pulls(SCL_PIN, true, false);   // enable internal pull-up of SCL_PIN=GP27

}

void read_red_sign(void)
{
    uint8_t byteREAD[16]; //readした値の格納用
    uint8_t byteWRITE[16];//書き込む値の格納用
    byteWRITE[0] = 2; 
    byteWRITE[1] = 1;
    int i2c_result;//正しく読み取れたかの判別

    //読み込み
    //i2c_result = i2c_read_timeout_us(I2C_PORT,OPENMV_ADDRESS,byteREAD,1,false,500);
    //(i2cport,slave address,読み込むデータの格納用,実際に読み出すデータ量,writeと同じ,timeout)
    byteREAD[0]= gpio_get(SDA_PIN);

    //正しく値を読み込めているかの判別
    if (i2c_result == PICO_ERROR_GENERIC){
        //printf("generic error\n");
    }
    else if (i2c_result == PICO_ERROR_TIMEOUT){
        //printf("timeout error\n");
    }
    //正しく読み込めていた場合
    else{
        //printf("%d\n", byteREAD[0]);
        if(byteREAD[0]==0)
        {
            //rgbled_normal();
            Red_flag = 0;
        }
        else
        {
            //rgbled_red();
            Red_flag = 1;
        }
        
    }

}