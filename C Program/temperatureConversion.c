#include <stdio.h>

int main(){

    char choice = '\0';
    float Celsius = 0.0f;
    float Fahrenheit = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    
    printf("Is the temp in Celcius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if (choice == 'C') {
        // C to F
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &Celsius);

        Fahrenheit = Celsius * 1.8 + 32;

        printf("%.1f Celsius is equal to %.1f Fahrenheit", Celsius, Fahrenheit);
    }
    else if (choice == 'F') {
        //F to C
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &Fahrenheit);

        Celsius = (Fahrenheit - 32) / 1.8;

        printf("%.1f Fahrenheit is equal to %.1f Celsius", Fahrenheit, Celsius);
    }
    else {
        printf("Invalid choice! Please select C or F\n");
    }

    return 0;
}