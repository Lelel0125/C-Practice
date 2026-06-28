#include <stdio.h>

int main(){

    FILE *pFile = fopen("C:\\Users\\asdqz\\Desktop\\Coding\\C Program\\output.txt", "w"); //"w" for write, "r" for read

    char text[] = "BOOTY BOOTY BOOTY\nROCKIN' EVERYWHERE";

    if (pFile == NULL){
        printf("Error opening file\n");
        return 1; // mean error
    }

    fprintf(pFile, "%s", text); // add word in file

    printf("File was written successfully!\n");

    fclose(pFile); // every open file to do in the end
                   // easy forgot

    return 0; //mean no error
}