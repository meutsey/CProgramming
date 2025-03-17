/*
The program computes the roots of quadratic equations.
*/

#include <stdio.h>
#include <math.h>

// Function Prototypes
// char stores a character
void printPrompt(char ch);
int getCoefficient(void);
int countDiscriminant(int a, int b, int c);
void printRoots(int a, int b, int c);

int main(void) {
    printPrompt('a'); 
    int a = getCoefficient();
    printPrompt('b');
    int b = getCoefficient();
    printPrompt('c');
    int c = getCoefficient();

    printRoots(a, b, c);

    return 0;
}

/*************************/
void printPrompt(char ch) {
    printf("Enter the coefficient %c: ", ch); // %c - conversion specifier to print characters
}

/*************************/
int getCoefficient(void) {
    int coeff = 0;
    scanf("%d", &coeff);

    return coeff;
}

/*************************/
int countDiscriminant(int a, int b, int c) {
    return (b * b) - (4 * a * c);
}

/*************************/
void printRoots(int a, int b, int c) {
    // Calculate discriminant
    double discrim = countDiscriminant(a, b, c);

    if (discrim < 0) {
        puts("No real roots");
    }
    if (discrim == 0) {
        int x = -b / (2 * a);
        printf("x = %d\n", x);
    }
    if (discrim > 0) {
        double x1 = (-b + sqrt(discrim)) / (2 * a);
        double x2 = (-b - sqrt(discrim)) / (2 * a);
        printf("x = %f, %f\n", x1, x2); // %f - conversion specifier to handle doubles
    }
}