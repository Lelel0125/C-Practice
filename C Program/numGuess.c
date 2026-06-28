#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int ans = (rand() % (max - min + 1)) + min;

    printf("*** NUMBER GUESSING GAME ***\n");

    do {
        printf("Guess a number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;

        if (guess < ans){
            printf("TOO LOW!\n");
        }
        else if (guess > ans) {
            printf("TOO HIGH!\n");
        }
        else {
            printf("CORRECT!\n");
        }

    }while(guess != ans);

    printf("The answer is %d\n", ans);
    printf("It took you %d tries", tries);

    return 0;
}