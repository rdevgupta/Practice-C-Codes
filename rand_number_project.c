#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    //run the loop until the number is guessed correctly
    do
    {
        printf("Guess a number between 1 to 100: \n");
        scanf("%d", &guess);
        if(guess > number)
        {
            printf("enter a smaller number.\n");
        }
        else if(guess < number)
        {
            printf("enter a greater number.\n");
        }
        else
        {
            printf("You guessed the correct number in %d no. of guesses\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    
    return 0;
}