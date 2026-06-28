#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ComputerChoice(){
    
    int max = 3;
    int min = 1;

    int computerChoice = (rand() % (max - min + 1)) + min;
    return computerChoice;
}

int UserChoice(){
    int userChoice = 0;
    
    do{
        printf("*** ROCK PAPER SCISSORS ***\n");
        printf("Choose an option\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Enter your choice: ");
        scanf("%d", &userChoice);

    } while(userChoice < 1 || userChoice > 3);
    return userChoice;
}

void checkWinner(int computerChoice, int userChoice){
    
    if (computerChoice == userChoice){
        printf("It's a TIE!\n");
    }
    else{
        switch (userChoice){
        case 1:
            if (computerChoice == 2){
                printf("YOU LOSE!\n");
            }
            else{
                printf("YOU WIN!\n");
            }
            break;
        case 2:
            if (computerChoice == 1){
                printf("YOU WIN!\n");
            }
            else{
                printf("YOU LOSE!\n");
            }
            break;
        case 3:
            if (computerChoice == 1){
                printf("YOU LOSE!\n");
            }
            else{
                printf("YOU WIN!\n");
            }
            break;
        }
    }
}

int main() {

    srand(time(NULL));

    int userChoice = UserChoice();
    int computerChoice = ComputerChoice();
    
    switch (userChoice){
        case 1:
            printf("You chose ROCK!\n");
            break;
        case 2:
            printf("You chose PAPER!\n");
            break;
        case 3:
            printf("You chose SCISSORS!\n");
            break;
    }

    switch (computerChoice){
        case 1:
            printf("Computer chose ROCK!\n");
            break;
        case 2:
            printf("Computer chose PAPER!\n");
            break;
        case 3:
            printf("Computer chose SCISSORS!\n");
            break;
    }

    checkWinner(computerChoice, userChoice);

    return 0;
}