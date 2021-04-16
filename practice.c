#include <stdio.h>
#include<math.h>
int main() 
{
    int num, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    for (i = 2; i <= num; ++i) {
        if (num % i == 0 && i!=num) {
            sum = sum + i;
        }
    }
	printf("Sum of Factors of %d is: %d", num, sum);
    return 0;
}