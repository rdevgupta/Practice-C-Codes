#include<stdio.h>

int main()
{
    int i = 34;
    int *j = &i;
    int **k = &j;
    // and pointer k stores address of pointer j
    //now j stores the address of i and acts as pointer
    printf("value through variable: %d\n", i);
    printf("address through variable: %d\n", &i);
    printf("address through pointer: %d\n", j);
    printf("value  through pointer: %d\n", *j);
    printf("address of j  through pointerk: %d\n", k);
    printf("value of j through pointerk: %d\n", *k);
}