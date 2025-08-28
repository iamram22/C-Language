#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int number_of_guesses = 0;
    int guessed;

    // printf("Random number between 1 and 100 is %d\n", randomNumber);

    
    do{
        
        printf("Guess the random Number : \n");
        scanf("%d", &guessed);
        if(guessed>randomNumber){
            printf("lower number pls!\n");
        }else if(randomNumber<guessed){
            printf("higher number pls\n");
        }else{
            printf("Congrats!! \n");
        }
        number_of_guesses++;
    }while(guessed != randomNumber); 
        printf("you guessed the number in %d guesses", number_of_guesses);
    return 0;
}
