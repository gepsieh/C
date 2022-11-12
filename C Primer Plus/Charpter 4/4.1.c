/*
 * @Author: Tanaka Hao 314308943@qq.com
 * @Date: 2022-11-12 23:15:00
 * @LastEditors: Tanaka Hao 314308943@qq.com
 * @LastEditTime: 2022-11-12 23:26:54
 * @FilePath: \C\C Primer Plus\Charpter 4\4.1.c
 * @Description: Print name.
 * 
 * Copyright (c) 2022 by Tanaka Hao 314308943@qq.com, All Rights Reserved. 
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 30

int main(void)
{
    char first_name[MAX_LEN];
    char last_name[MAX_LEN];

    printf("Your first name? ");
    scanf("%s", first_name);
    printf("Your last name? ");
    scanf("%s", last_name);

    printf("Thank you, %s %s.", first_name, last_name);

    getchar();
    getchar();
    return 0;
}

