#include <stdio.h>

int main(){
    
    int score[5] = {0}; // doesn't automatically set 0

    int len = sizeof(score);
    int single = sizeof(score[0]);
    
    int size = len / single;

    for (int i = 0; i < size; i++){
        printf("Enter a score: ");
        scanf("%d", &score[i]);
    }

    // printf("%d\n", sizeof(score));
    // printf("%d", sizeof(score[0]));

    for (int j = 0; j < size; j++){
        printf("%d ", score[j]);
    }

    return 0;
}