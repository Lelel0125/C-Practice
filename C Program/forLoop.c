#include <stdio.h>
#include <windows.h> //Windows
// #include <unistd.h> for Linux/Mac

int main(){

    for(int i = 10; i >= 0; i--){    //for (Initialization; Condition; Update){}
        Sleep(1000);
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR!");

    return 0;
}