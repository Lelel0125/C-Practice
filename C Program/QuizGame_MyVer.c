#include <stdio.h>
#include <string.h>

int main(){

    int questionCount = 4;
    int score = 0;
    char choose = '\0';

    char question[4][50] = {
                            {"What is the largest planet in the solar system?"},
                            {"What is the hottest planet?"},
                            {"What planet has the most moons?"},
                            {"Is the Earth flat?"}
                           };
    char options[4][50] = {
                           {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune"},
                           {"A. Mercury\nB. Venus\nC. Earth\nD. Mars"},
                           {"A. Earth\nB. Mars\nC. Jupiter\nD. Saturn"},
                           {"A. Yes\nB. No\nC. Maybe\nD. Sometimes"}
                          };

    printf("*** QUIZ GAME ***\n");

    for ( int i = 0; i < questionCount; i++){
        printf("\n%s\n", question[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your choice: ");
        scanf(" %c", &choose);

        switch (i) {
            case 0:
                if (choose == 'A' || choose == 'a'){
                    printf("Correct!\n");
                    score += 1;
                    break;
                }
                else {
                    printf("WRONG!\n");
                    break;
                }
            case 1:
                if (choose == 'B' || choose == 'b'){
                    printf("Correct!\n");
                    score += 1;
                    break;
                }
                else {
                    printf("WRONG!\n");
                    break;
                }
            case 2:
                if (choose == 'C' || choose == 'c'){
                    printf("Correct!\n");
                    score += 1;
                    break;
                }
                else {
                    printf("WRONG!\n");
                    break;
                }
            case 3:
                if (choose == 'B' || choose == 'b'){
                    printf("Correct!\n");
                    score += 1;
                    break;
                }
                else {
                    printf("WRONG!\n");
                    break;
                }
        }
    }

    printf("\nYour score is %d oout of %d points", score, questionCount);

    return 0;
}