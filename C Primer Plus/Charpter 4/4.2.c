/*
 * @Author: Tanaka Hao 314308943@qq.com
 * @Date: 2022-11-12 23:27:13
 * @LastEditors: Tanaka Hao 314308943@qq.com
 * @LastEditTime: 2022-11-12 23:34:05
 * @FilePath: \C\C Primer Plus\Charpter 4\4.2.c
 * @Description: Input file size and net speed, get download time
 * 
 * Copyright (c) 2022 by Tanaka Hao 314308943@qq.com, All Rights Reserved. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float size, speed;
    printf("Size(MB):");
    scanf("%f", &size);
    printf("Speed(MB/s):");
    scanf("%f", &speed);

    printf("At %.2f megabytes per second, a file of %.2f megabytes downloads in %.2f seconds.", speed, size, size/speed);

    getchar();
    getchar();
    return 0;
}