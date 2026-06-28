#include <stdio.h>
#include <string.h>

int main(){

    char name[4][25] = {0};
    int rows = sizeof(name) / sizeof(name[0]);

    for (int i = 0; i < 4; i++){
        printf("Enter a name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strlen(name[i]) - 1] = '\0';
    }
    
    for (int j = 0; j < 4; j++){
        printf("%s\n", name[j]);
    }
    
    // printf("Enter a name: ");
    // fgets(name[0], sizeof(name[0]), stdin);
    // name[0][strlen(name[0]) - 1] = '\0';

    // printf("%s\n", name[0]);

    // char fruit[][10] = {"Apple", 
    //                     "Banana", 
    //                     "Coconut"};
    // int size = sizeof(fruit) / sizeof(fruit[0]);

    // fruit[0][0] = 'e';
    // fruit[0][4] = 'A';

    // fruit[1][0] = 'a';
    // fruit[1][5] = 'B';

    // fruit[2][0] = 't';
    // fruit[2][6] = 'C';

    // for (int i = 0; i < size; i++){
    //     printf("%s\n", fruit[i]);
    // }

    return 0;
}