#include <stdio.h>

int main(){

    int choose = 0;
    float kilograms = 0.0f;
    float pound = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");  //1 kg == 2.2046 lb
    printf("2. Pounds to Kilograms\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choose);

    if (choose == 1) {
        // Kilograms to Pounds
        printf("Enter the weight in kilograms: ");
        scanf("%f", &kilograms);

        pound = kilograms * 2.20462;

        printf("%.2f kilograms is equal to %.2f pounds", kilograms, pound);
    }
    else if (choose == 2) {
        // Pounds to Kilograms
        printf("Enter the weight in pounds: ");
        scanf("%f", &pound);

        kilograms = pound / 2.20462;

        printf("%.2f pounds is equal to %.2f kilograms", pound, kilograms);
    }
    else {
        printf("Invalid choice! Please enter 1 or 2\n");
    }

    return 0;
}