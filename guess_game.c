#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber, guess;
    int attempts = 0;

    // Seed random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    printf(" Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");

    // Loop until user guesses correctly
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high! Try again...\n");
        } 
        else if (guess < secretNumber) {
            printf("Too low! Try again...\n");
        } 
        else {
            printf(" Congratulations! You guessed it right (you genius).\n");
            printf("Total attempts: %d\n", attempts);
            break;
        }
    }

    return 0;
}
