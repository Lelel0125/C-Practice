#include <stdio.h>

int main(){

    char operator = '\0';
    double Num1 = 0.0;
    double Num2 = 0.0;
    double Ans = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &Num1);

    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &Num2);

    switch (operator) {
        case '+':
            Ans = Num1 + Num2;
            break;
        
        case '-':
            Ans = Num1 - Num2;
            break;

        case '*':
            Ans = Num1 * Num2;
            break;

        case '/':
            if (Num2 == 0){
                printf("Your can't divide by zero!\n");
            }
            else {
                Ans = Num1 / Num2;
            }
            break;

        default:
            printf("Invalid operator\n");
    }

    printf("Result: %.4lf", Ans);

    return 0;
}