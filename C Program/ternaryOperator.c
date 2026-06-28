#include <stdio.h>
#include <stdbool.h>

int main(){

    // (condition) / value_if_true : value_if_false;

    // int x = 7;
    // int y = 6;
    // int max = (x > y) ? x : y;

    // printf("%d", max);
    
    // bool isOnline = true;

    // printf("%s", (isOnline) ? "online" : "offline");

    // int number = 9;

    // printf("%d is %s", number, (number % 2 == 0) ? "even" : "odd");

    // int age = 16;

    // printf("%s", (age > 18) ? "adult" : "child");

    int hours = 12;
    int minutes = 30;
    char *meridiem = (hours < 12) ? "AM" : "PM";

    printf("%02d:%02d %s", hours, minutes, meridiem);

    return 0;
}