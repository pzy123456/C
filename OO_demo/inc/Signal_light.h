/******************************************************************
 * 文件：signal_light.h
 * 描述：信号灯抽象接口
 * 日期：2020-03-07
 * 作者：pzy
 * 版本：Ver.1.0 | 最初版本
*******************************************************************/
#ifndef __SIGNAL_LIGHT_H
#define __SIGNAL_LIGHT_H

/* 声明结构体统一函数指针类型定义类型 */
typedef struct ty_LightInterfaceStruct
{
    /* 给外部灯接口函数名 */
    void (*TurnOn)(void);
    void (*TurnOff)(void);
}LightInterfaceStruct;

#endif
