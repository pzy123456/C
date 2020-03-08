/******************************************************************
 * 文件：Sigal_light.c
 * 描述：信号灯抽象接口,向上层提供服务接口函数服务，注册信号灯驱动
 * 日期：2020-03-07
 * 作者：pzy
 * 版本：Ver.1.0 | 最初版本
*******************************************************************/
#include "Signal_light.h"

/* 定义一个信号灯 */
static LightInterfaceStruct LightInterface;

/* 注册信号灯驱动 */
void Resiter_Signal_Light(LightInterfaceStruct Light)
{
    LightInterface = Light;
}

/* 信号灯给上层提供服务打开灯接口 */
void Signal_Light_TurnOn(void)
{
    LightInterface.TurnOn();
}

/* 信号灯给上层提供服务关闭灯接口 */
void Signal_Light_TurnOff(void)
{
    LightInterface.TurnOff();
}

