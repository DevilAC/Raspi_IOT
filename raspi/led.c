#include <wiringPi.h>

int IO_init()
{
    wiringPiSetup () ; // 初始化 这个必须写在最前面
    pinMode (0, OUTPUT) ; // 设置GPIO.0 为输出
    return 1;
}

void light_on()
{
       digitalWrite (0, HIGH);  // GPIO.0 输出高
}
    
void light_off()
{
     digitalWrite (0, LOW); // GPIO.0 输出低
}
         

