/*
 * @Author: Tanaka Hao 314308943@qq.com
 * @Date: 2022-11-12 20:32:01
 * @LastEditors: Tanaka Hao 314308943@qq.com
 * @LastEditTime: 2022-11-12 21:54:32
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
    printf("Enter your age:");
    scanf("%d", &age);
    sec=(long)age*3.156e7;

    printf("That is %ld seconds.", sec);

    getchar();
    getchar();

    return 0;
}
