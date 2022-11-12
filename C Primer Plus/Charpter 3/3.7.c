/*
 * @Author: Tanaka Hao 314308943@qq.com
 * @Date: 2022-11-12 22:12:03
 * @LastEditors: Tanaka Hao 314308943@qq.com
 * @LastEditTime: 2022-11-12 22:13:37
 * @FilePath: \C\C Primer Plus\Charpter 3\3.7.c
 * @Description: Transfer height from inch to cm
 * 
 * Copyright (c) 2022 by Tanaka Hao 314308943@qq.com, All Rights Reserved. 
 */

#include <stdio.h>

int main(void)
{
    printf("Enter your height in inch:");
    float height_inch;
    scanf("%f", &height_inch);
    printf("Your height in cm is: %f", height_inch * 2.54);

    getchar();
    getchar();

    return 0;
}