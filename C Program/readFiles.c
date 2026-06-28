#include <stdio.h>

int main(){

    FILE *pFile = fopen("C:\\Users\\asdqz\\Desktop\\Coding\\C Program\\input.txt", "r");
    char buffer[1024] = {0}; //instead of reading a book word by word
                             //it helps reading chapter by chapter, but shouldn't be too large

    if (pFile == NULL){
        printf("Could not open file\n");
        return 1; // mean error
    }

    while (fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer);
    }

    fclose(pFile);

    return 0; //mean no error
}