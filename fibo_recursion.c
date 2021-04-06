#include<stdio.h>

int fibo(int number);

int main()
{
    int number, result;
    printf("Enter the nth number for which you want to find fibonacci term:\n");
    scanf("%d", &number);
    if(number<0)
    {
        printf("negative fibonacci not possible.\n");
    }
    else
    {
        result = fibo(number);
        printf("The %dth fibonacci nuber is %d\n", number, result);
    }
    return 0;
}

int fibo(int number)
{
    if(number == 0)
    {
        return 0;
    }
    else if(number == 1)
    {
        return 1;
    }
    else
    {
        return (fibo(number-1) + fibo(number-2));
    }
}