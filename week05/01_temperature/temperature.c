/*
Function that prints a description of a temperature.
*/
#include <stdio.h>

// Function prototypes
void tempDescription(double temp);

// Checks whether the given number is in a range [0; 10]
void checkRange(int number);

int largest(int num1, int num2, int num3);

int main(void) {
    // double temp = 0;
    // printf("Enter your body temperature: ");
    // scanf("%lf", &temp);
    // tempDescription(temp);

    // int number = 0;
    // printf("Enter any number: ");
    // scanf("%d", &number);
    // checkRange(number);

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    largest(num1, num2, num3);

    return 0;
}
/***********************************/
void tempDescription(double temp) {
    if (temp > 101) {
        puts("High Fever");
    }
    else if (temp > 99) {
        puts("Low Fever");
    }
    else if (temp > 97) {
        puts("Normal Temperature");
    }
    else {
        puts("Unusually Low Temperature");
    }
    
}

/***********************************/
void checkRange(int number) {
    if (number >= 0 && number <=10) { // && - called a logical operator, acts as you would think an 'and' statement would.
        puts("Number is within the range 0-10.");
    }
    else {
        puts("Number outside of the range 0-10.");
    }
}

/***********************************/
int largest(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest\n", num1);
        return num1;
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest\n", num2);
        return num2;
    }
    else if (num3 >= num1 && num3 >= num2) {
        printf("%d is the largest\n", num3);
        return num3;
    }
}