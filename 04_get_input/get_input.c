/*
    Getting an input from the keyboard
*/

#include <stdio.h>

int main() {
    int square_side = 1;
    int square_perimeter = 0;
    int square_area = 0;

    // Write the prompt
    // puts - prints the string to hte console
    puts("Enter the side of a square: ");

    // Get the input
    // &<variable> - address operator, tells the function where the variable is stored. Always put & before every variable in scanf.
    // Only use conversion specifiers inside a scanf function. Never use messages or escape sequences.
    scanf("%d", &square_side); 

    // Do the math
    square_perimeter = square_side * 4;

    printf("The perimeter of a square with side %d is %d\n", square_side, square_perimeter);

    return 0;
}