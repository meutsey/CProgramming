#include <stdio.h>

int main(void) {
    // Get the uppercase character
    char input = ' ';
    do {
        printf("Enter an uppercase character: ");
        scanf(" %c", &input);
    } while(input < 'A' || input > 'Z');

    // Get a positive integer
    int number = 0;
    do {
        printf("Enter a positive integer: ");
        scanf(" %d", &number);
    } while(number <= 0);

    char symbol = ' ';
    do {
        printf("Enter * or #: ");
        scanf(" %c", &symbol);
    } while(symbol != '*' && symbol != '#');

    // Print <number> of <inputs> in one line
    for (int counter = 1; counter <= number; counter++) {
        printf("%c%c", input, symbol);
    }

    // TODO
    // Scan a second character. It should be either * or # and nothing else
    // Print the pattern
    // e.g. A 10 *
    // A*A*A*A*A*A*A*A*A*A*

    return 0;
}