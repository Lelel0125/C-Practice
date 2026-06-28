#include <stdio.h>
#include <stdbool.h>

int main(){

    bool isSunny = false;

    if (!isSunny){
        printf("It is CLOUDY outside");
    }
    else {
        printf("It is SUNNY outside");
    }

    return 0;
}

// && = AND, || = OR, !x = NOT x