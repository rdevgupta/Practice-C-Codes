#include<stdio.h>
int sum(int a, int b);
int main()
{
    int a = 4, b = 7;
    printf("value of a and b is %d\n%d\n", a, b);
    printf("the value of a+b is %d\n", sum(a, b));
    printf("value of a and b is %d\n%d\n", a, b);
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    b=234;
    a=221;
    //this a and b wont affect actual params as function recieves copy of those values
    //to change original values in main code use of pointer is required which will ultimately change the original values
    return c;
}