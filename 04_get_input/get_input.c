/*
    Getting an input from the keyboard
*/

#include <stdio.h>

int main() {
    int square_side = 1;
    int square_perimeter = 0;
    int square_area = 0;

    // Write the prompt
    // puts - prints the string to the console
    puts("Enter the side of a square: ");

    // Get the input
    // &<variable> - & is an address operator, tells the function where the variable is stored. Always put & before every variable in scanf.
    // Only use conversion specifiers inside a scanf function. Never use messages or escape sequences.
    scanf("%d", &square_side); 

    // Do the math
    square_perimeter = square_side * 4;
    square_area = square_side * square_side;

    printf("The perimeter of a square with side %d is %d\n", square_side, square_perimeter);
    printf("The area of a square with side %d is %d\n", square_side, square_area);

    return 0;
}