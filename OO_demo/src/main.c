/******************************************************************
 * 文件：main.c
 * 描述：调用底层接口，实现功能
 * 日期：2020-03-07
 * 作者：pzy
 * 版本：Ver.1.0 | 最初版本
*******************************************************************/
#include <stdio.h>
#include "Advan_Light.h"
#include "Normal_Light.h"


    /* main函数定位为上层服务函数 */
int main(int argc, char const *argv[])
{

    /* 注册信号灯驱动 */
    Resiter_Signal_Light(Normal_light);
    /* 调用底层接口 */
    Signal_Light_TurnOn();
    Signal_Light_TurnOff();

    /* 注册信号灯驱动 */
    Resiter_Signal_Light(Advant_light);
    /* 调用底层接口 */
    Signal_Light_TurnOn();
    Signal_Light_TurnOff();

    return 0;
}
