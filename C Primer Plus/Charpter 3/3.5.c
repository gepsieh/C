/*
 * @Author: Tanaka Hao 314308943@qq.com
 * @Date: 2022-11-12 20:32:01
 * @LastEditors: Tanaka Hao 314308943@qq.com
 * @LastEditTime: 2022-11-12 21:41:56
 * @FilePath: \C\C Primer Plus\Charpter 3\3.5.c
 * @Description: 输入年龄对应秒数
 * 
 * Copyright (c) 2022 by Tanaka Hao 314308943@qq.com, All Rights Reserved. 
 */

#include <stdio.h>

int main(void)
{
    int age;
    long sec;
    printf("输入年龄:");
    scanf("%d", &age);
    sec=(long)age*3.156e7;

    printf("秒数为 %ld.", sec);

    getchar();
    getchar();

    return 0;
}
