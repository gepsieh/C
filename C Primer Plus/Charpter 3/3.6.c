/*
 * @Author: Tanaka Hao 314308943@qq.com
 * @Date: 2022-11-12 21:58:35
 * @LastEditors: Tanaka Hao 314308943@qq.com
 * @LastEditTime: 2022-11-12 22:10:01
 * @FilePath: \C\C Primer Plus\Charpter 3\3.6.c
 * @Description: Enter the quarter of water and calculate the number of molecules of it.
 * 
 * Copyright (c) 2022 by Tanaka Hao 314308943@qq.com, All Rights Reserved. 
 */

#include <stdio.h>

int main(void)
{
    float quarter=0.0;
    double n=0.0;
    printf("Enter the quarter of water:");
    scanf("%f", &quarter);
    n=quarter*950.0/(3e-23);
    printf("That is %.1le molecules!Wow!\n", n);

    getchar();
    getchar();

    return 0;

}
