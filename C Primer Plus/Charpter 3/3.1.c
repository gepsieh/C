#include <stdio.h>
#include <math.h>
#include <float.h>

int main(void)
{
    printf("%d\t%d\t%f\t%f", 2e32, 2e32+1, (float)(2e32)+1, (float)(2e-32)-1);

    getchar();
    return 0;
}