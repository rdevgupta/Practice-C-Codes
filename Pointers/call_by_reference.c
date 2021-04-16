//here adddress of the variables is passed as params to fnction so any changes in function will lead to change in actual values
#include<stdio.h>

void wrong_swap(int a, int b);

void swap(int *a, int *b);

int main()
{
    int x = 3, y = 4;
    printf("numbers before swap are %d\n%d\n", x, y);
    wrong_swap(x,y);
    printf("numbers after wrong swap are %d\n%d\n", x, y);
    swap(&x, &y); // call by reference you can declare two pointer also and store the address individually
    printf("numbers after swap are %d\n%d\n", x, y);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void wrong_swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
//wrong swap is not working as it is having call by value so actual args wont be changed