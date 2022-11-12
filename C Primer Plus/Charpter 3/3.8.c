/*
 * @Author: Tanaka Hao 314308943@qq.com
 * @Date: 2022-11-12 22:14:29
 * @LastEditors: Tanaka Hao 314308943@qq.com
 * @LastEditTime: 2022-11-12 22:19:02
 * @FilePath: \C\C Primer Plus\Charpter 3\3.8.c
 * @Description: Volume Calculator for pint, cup, ounce, soup spoon, tea spoon
 * 
 * Copyright (c) 2022 by Tanaka Hao 314308943@qq.com, All Rights Reserved. 
 */

#include <stdio.h>

int main(void)
{
    printf("Enter volume in cups:");
    float cups;
    scanf("%f", &cups);

    printf("%f cups is \n"
            "%f in pint,\n"
            "%f in ounce,\n"
            "%f in soup spoon,\n"
            "%f in teaspoon.\n", cups, cups/2, cups*8, cups*8*2, cups*8*2*3);

    getchar();
    getchar();

    return 0;
}