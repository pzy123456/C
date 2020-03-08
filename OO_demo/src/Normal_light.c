/******************************************************************
 * 文件：Normal_Light.c
 * 描述：正常信号灯驱动
 * 日期：2020-03-07
 * 作者：pzy
 * 版本：Ver.1.0 | 最初版本
*******************************************************************/
#include "Normal_Light.h"
#include <stdio.h>

static void turnOn(void)
{
    printf("Normal_Light Turn On\n");
}

static void turnOff(void)
{
    printf("Normal_Light Turn Off\n");
}

LightInterfaceStruct Normal_light = {
    turnOn,
    turnOff,
};
