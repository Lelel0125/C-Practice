#include <stdio.h>

int getMax(int x, int y){
    if (x >= y){
        return x;
    }
    else{
        return y;
    }
}

int main(){

    int max = getMax(4, 5);

    printf("%d", max);

    return 0;
}