#include<stdio.h>
#include "fun.h"
int main()
{
    int num1 = 2, num2 = 4, num3, num4;
    num3 = sum(num1, num2);
    num4 = square(num1);
    printf("%d\n%d", num3, num4);
    return 0;
}