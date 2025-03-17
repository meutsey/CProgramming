#include <stdio.h>

void printCharsCombs(void);

int main(void) {
    printCharsCombs();

    return 0;
}

// TODO
// Remove duplicates from lists
// i.e. no BA when AB exists, or EC, when CE exists.
void printCharsCombs(void) {
    char outer = 'A';
    while (outer <= 'Z') {
        char inner = 'A';
        while (inner <= 'Z') {
            if (outer != inner) {
            printf("%c%c\n", outer, inner);
            }
            inner++;
        }
        outer++;
    }

}