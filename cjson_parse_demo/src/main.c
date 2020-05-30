/******************************************************************
 * 文件：main.c
 * 描述：解析JSON数据打印出来
 * 日期：2020-05-30
 * 作者：pzy
 * 版本：Ver.1.0 | 最初版本
*******************************************************************/
#include <stdio.h>
#include "cJSON.h"

char *message =
"{                              \
    \"name\":\"pzylovebug\",   \
    \"age\": 22,                \
    \"weight\": 70.5,           \
    \"address\":                \
        {                       \
            \"country\": \"China\",\
            \"city   \": \"Fuzhou\"\
        },                      \
    \"skill\": [\"c\", \"Linux & RT-thread\", \"English\",\"MCU & SOC\"],\
    \"student\": false          \
}";
int main(int argc, char const *argv[])
{
    /* 创建头指针 */
    cJSON *cjson_test = NULL;
    cJSON *cjson_name = NULL;
    cJSON *cjson_age = NULL;
    cJSON *cjson_weight = NULL;
    cJSON *cjson_address = NULL;
    cJSON *cjson_address_country = NULL;
    cJSON *cjson_address_city = NULL;
    cJSON *cjson_student = NULL;
    cJSON *cjson_skill = NULL;

    int skill_array_size = 0,i = 0;
    cJSON *cjson_skill_item = NULL;
    
    /* 解析整段JSON数据 */
    cjson_test = cJSON_Parse(message);
    if (cjson_test == NULL)
    {
        printf("parse fail\n");
        return -1;
    }

    /* 依次根据名称提取JSON数据 */
    cjson_name = cJSON_GetObjectItem(cjson_test, "name");
    cjson_age = cJSON_GetObjectItem(cjson_test, "age");
    cjson_weight = cJSON_GetObjectItem(cjson_test, "weight");

    printf("name: %s\n",cjson_name->valuestring);
    printf("age: %d\n",cjson_age->valueint);
    printf("weight: %.1f\n",cjson_weight->valuedouble);

    /* 解析嵌套数据 */
    cjson_address = cJSON_GetObjectItem(cjson_test, "address");
    cjson_address_country = cJSON_GetObjectItem(cjson_address, "country");
    cjson_address_city = cJSON_GetObjectItem(cjson_address, "city   ");
    printf("address-country:%s\naddress-city   :%s\n",cjson_address_country->valuestring,cjson_address_city->valuestring );

    /* 解析数组 */
    cjson_skill = cJSON_GetObjectItem(cjson_test, "skill");
    skill_array_size = cJSON_GetArraySize(cjson_skill);
    printf("skill:[");
    for (i = 0; i < skill_array_size; i++)
    {
        cjson_skill_item = cJSON_GetArrayItem(cjson_skill, i);
        printf("%s,",cjson_skill_item->valuestring);
    }
    printf("\b]\n");

    /* 解析布尔型数据 */
    cjson_student = cJSON_GetObjectItem(cjson_test, "student");
    if (cjson_student->valueint == 0)
    {
        printf("student: false\n");
    }
    else
    {
        printf("student:error\n");
    }
    return 0;
}
