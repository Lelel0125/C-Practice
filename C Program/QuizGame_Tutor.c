#include <stdio.h>
#include <ctype.h>

int main(){

    char question[][100] = {"What is the largest planet in the solar system?",
                            "What is the hottest planet?",
                            "What planet has the most moons?",
                            "Is the Earth flat?"};

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
                           "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
                           "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
                           "A. Yes\nB. No\nC. Maybe\nD. Sometimes"};

    char answerkey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(question) / sizeof(question[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for (int i = 0; i < questionCount; i++){
        printf("\n%s\n", question[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if (guess == answerkey[i]){
            printf("CORRECT!\n");
            score++;
        }
        else {
            printf("WRONG!\n");
        }
    }

    printf("\nYour score is %d out of %d points\n",  score, questionCount);

    return 0;
}