#include <stdio.h>
#include <stdlib.h> // rand() aur srand() ke liye
#include <time.h>   // time() ke liye

int main()
{
    int random_number;
    int no_of_guesses = 0;
    int guessed_number;

    // Computer ki ghadi (time) ko as a 'seed' use karna taaki har baar naya number aaye
    srand(time(0));

    // 1 se 100 ke beech ka random number nikalne ka formula
    random_number = (rand() % 100) + 1;

    // printf("Your random number is : %d\n", random_number);

    do
    {
        printf("guess the number ");
        scanf("%d", &guessed_number);
        if (guessed_number > random_number)
        {
            printf("lower number please!\n");
        }
        else if(guessed_number < random_number)
        {
            printf("higher number please!\n");
        }
        else{
            printf("congrats!\n");
        }

        no_of_guesses++;

    } while (guessed_number != random_number);

    printf("you guessed the number in %d guesses", no_of_guesses);

    return 0;
}