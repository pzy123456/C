/******************************************************************
 * 文件：Advan_light.c
 * 描述：高级信号灯驱动
 * 日期：2020-03-07
 * 作者：pzy
 * 版本：Ver.1.0 | 最初版本
*******************************************************************/
#include "Advan_Light.h"
#include <stdio.h>

static void turnOn(void)
{
    printf("Advan_Light Turn On\n");
}

static void turnOff(void)
{
    printf("Advan_Light Turn Off\n");
}

LightInterfaceStruct Advant_light = {
    turnOn,
    turnOff,
};

