#include <stdio.h>

int main(){

    int row = 0;
    int column = 0;
    char symbol = '\0';

    printf("Enter the # of rows: ");
    scanf("%d", &row);

    printf("Enter the # of columns: ");
    scanf("%d", &column);
    getchar();

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= column; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}