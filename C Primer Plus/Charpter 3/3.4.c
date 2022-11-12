/*
 * @brief 输入一个浮点数并显示小数点形式、指数形式和p计数法。。
 * @author Tanaka Hao
 */

#include <stdio.h>

int main(void)
{
    float n;
    printf("Enter a floating-point number:");
    scanf("%f", &n);

    printf("fixed-point notation: %f\n", n);
    printf("exponential notation: %e\n", n);
    printf("p notation: %p\n", n);

    getchar();
    getchar();

    return 0;
}