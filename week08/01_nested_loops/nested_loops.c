#include <stdio.h>

void printTriangleTopLeftStars(int size);
void printTriangleTopLeftNumbersInc(int size);
void printTriangleTopLeftNumbersDec(int size);
void printTriangleBottomLeftStars(int size);
void printTriangleBottomRightStars(int size);

int main(void) {
    // Scan a positive integer
    int n = 0;
    do {
        printf("Enter an integer: ");
        scanf("%d", &n);
    } while (n <= 0);

    printTriangleTopLeftStars(n);
    printf("\n\n");
    printTriangleBottomLeftStars(n);
    printTriangleTopLeftNumbersInc(n);
    printf("\n");
    printTriangleTopLeftNumbersDec(n);
    printf("\n");
    printTriangleBottomRightStars(n);

    return 0;
}

/*
    5
    *****
    ****
    ***
    **
    *

*/

void printTriangleTopLeftStars(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++) {
            printf("%c", '*');
        }
        puts(""); // New line after printing one line
    }

}

void printTriangleBottomLeftStars(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", '*');
        }
        puts("");
    }
}

/*
    5
    12345
    1234
    123
    12
    1
*/

void printTriangleTopLeftNumbersInc(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 1; j <= size - i; j++) {
            printf("%d", j);
        }
        puts("");
    }
}

void printTriangleTopLeftNumbersDec(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = size; j > i; j--) {
            printf("%d", j);
        }
        puts("");
    }
}

// TODO printTriangleBottomRightStars
/*  
    5
        *
       **
      ***
     ****
    *****
*/

void printTriangleBottomRightStars(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%c", '*');
        }
        puts("");
    }
}