#include <stdio.h>

int main() {
    int age;
    int minutes;
    puts("Enter your age in years: "); // Prints to console
    scanf("%d", &age); // Wants a number input in the console and stores it to the specified variable
    minutes = age * 365 * 24 * 60;
    printf("\"%d\" years is \"%d\" minutes\n", age, minutes);
   
    return 0;
}