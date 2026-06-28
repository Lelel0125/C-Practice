#include <stdio.h>

// int result = 0; //GlOBAL SCOPE (hard to debug)

int add(int x, int y){
    int result = x + y;
    return result; //return x + y;
}

int subtract(int x, int y){
    int result = x - y;
    return result; //return x + y;
}

int main(){

    int x = 5; //LOCAL SCOPE
    int y = 6;

    int result = subtract(x, y);

    printf("%d",result);

    return 0;
}