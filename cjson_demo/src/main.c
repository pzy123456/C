/******************************************************************
 * 文件：main.c
 * 描述：cJSON函数写了一个简单的自我介绍的demo
 * 日期：2020-05-30
 * 作者：pzy
 * 版本：Ver.1.0 | 最初版本
*******************************************************************/
#include <stdio.h>
#include "cJSON.h"

int main(int argc, char const *argv[])
{
    /* 创建头指针 */
    cJSON *cjson_test = NULL;
    cJSON *cjson_address = NULL;
    cJSON *cjson_skill = NULL;
    char *str = NULL;

    /* 创建一个JSON数据对象（创建头结点） */
    cjson_test = cJSON_CreateObject();
    /* 添加一条字符串类型的JSON数据（添加一个链表节点） */
    cJSON_AddStringToObject(cjson_test, "name", "pzylovebug");
    /* 添加一条整型数据类型的JSON数据（添加一个链表节点） */
    cJSON_AddNumberToObject(cjson_test, "age", 22);
    /* 添加一条浮点型数据类型的JSON数据（添加一个链表节点） */
    cJSON_AddNumberToObject(cjson_test, "weight", 70.5);
    
    /* 添加一个嵌套的JSON数据(添加一个链表节点) */
    cjson_address = cJSON_CreateObject();
    cJSON_AddStringToObject(cjson_address, "country", "China");
    cJSON_AddStringToObject(cjson_address, "city   ", "fuzhou");
    //cJSON_AddNumberToObject(cjson_address, "zip-code", 111111);
    cJSON_AddItemToObject(cjson_test , "address", cjson_address);

    /* 添加数组类型的JSON数据（添加一个链表节点） */
    cjson_skill = cJSON_CreateArray();
    cJSON_AddItemToArray(cjson_skill, cJSON_CreateString("C"));
    cJSON_AddItemToArray(cjson_skill, cJSON_CreateString("Linux & RT-thread"));
    cJSON_AddItemToArray(cjson_skill, cJSON_CreateString("English"));
    cJSON_AddItemToArray(cjson_skill, cJSON_CreateString("MCU & SOC"));
    cJSON_AddItemToObject(cjson_test, "skill", cjson_skill);

    /* 添加一个值为False的布尔类型为JSON数据类型（添加一个链表节点） */
    cJSON_AddFalseToObject(cjson_test, "student");

    /* 打印cJSON对象（链表） */
    str = cJSON_Print(cjson_test);
    printf("%s\n",str);
    return 0;
}
