#include <stdio.h>
#include <math.h>

int main(){
    
    double radius = 0.0;
    double Area = 0.0;
    double Surface_Area = 0.0;
    double Volume = 0.0;
    const double Pi = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    Area = pow(radius, 2) * Pi;
    Surface_Area = 4 * Pi * pow(radius, 2);
    Volume = 4 * Pi * pow(radius, 3) / 3;

    // Volume = (4 / 3) * Pi * pow(radius, 3);  Ans = 3141.59 (4/3 = 1)
    // Volume = (4.0 / 3) * Pi * pow(radius, 3);  Ans = 4188.79
    // Volume = 4 * Pi * pow(radius, 3) / 3; Ans = 4188.79 (correct)

    printf("Area: %.2lf\n", Area);
    printf("Surface Area: %.2lf\n", Surface_Area);
    printf("Volume: %.2lf\n", Volume);

    return 0;
}