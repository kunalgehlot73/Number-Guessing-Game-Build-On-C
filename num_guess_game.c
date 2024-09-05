// The program will generate a random number and asks the player to guess it.
// If the player's guess is higher than the actual number, the program displays "Lower Number Please!".
// If the player's guess is lower than the actual number, the program displays "Higher Number Please!".
// When the user guesses the correct number, the program displays the number of guesses the player used to guess the number.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Initialize random number generator
    srand(time(0));
    // Generate random number between 1 and 100
    int rand_num = (rand() % 100) + 1, guesses = 0, user_num;
    do {
    printf("Guess the  number:");
    scanf("%d", &user_num);
    if(user_num>rand_num){
        printf("Lower Number Please!\n");
    } else if (user_num<rand_num){
        printf("Higher Number Please!\n");
    }
    guesses++;
    } while(user_num != rand_num);
    printf("Congratulations! You guessed the number in %d tries.\n", guesses);
    return 0;
}

