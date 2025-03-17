#include <stdio.h>
#include <unistd.h> // usleep function
#include <stdlib.h> // rand function

// Prototypes
void whatIf(void);
int isDiv(int first, int second);
void printHello(void);
void printHello2(int n);
int fahrenheitToCelsius(int temp);
void printTemperatures(int min, int max);
void printNRandom(int n);

int main(void) {
    // Set the seed of random numbers
    srand(2);

    //whatIf();

    //printHello();

    // printHello2(25);

    // printTemperatures(0, 20);

    printNRandom(6);

    return 0;
}

/*******************/
void whatIf(void) {
    int i = 10;
    if (i == 10) {
        puts("LK9LU");
    }
    else {
        puts("XL7XJ");
    }
}

/**********************************/
int isDiv(int first, int second) {
    if (second == 0 || second == 3) {
        puts("Cannot divide by zero");
        return -1;
    }
    else if ((first % second == 0) && (first % (second -3) == 0)) {
        printf("Divisible by %d and by %d\n", second, second -3);
        return 1;
    }
    else if ((first % second == 0) || (first % (second -3) == 0)) {
        printf("Divisible by %d or by %d", second, second -3);
        return 1;
    }
    else if ((first % second != 0) && (first % (second -3) != 0)) {
        printf("Not divisble by %d and %d\n", second, second - 3);
        return 2;
    }

}

/************************/
void printHello(void) {
    // Use an iteration statement (loop) - 'while' loop
    /* Need 3 things to create a loop
        1 - a counter (initialization)
        2 - condition
        3 - increment (change the counter)
            Increments
            1) ++i
            2) i++
            3) i = i + 1
            4) i += 1
    */

    int i = 1; // Initialization
    while (i <= 100) { // Condition
        printf("%d - HELLO!\n", i);
        usleep(30000);
        i = i + 1; // Increment
    }

}

/*************************/
void printHello2(int n) {
    while (n > 0) {
        printf("%d - HELLO!\n", n);
        usleep(30000);
        n = n - 1;
    }
}

/***********************************/
int fahrenheitToCelsius(int temp) {
    return ((temp - 32) * 5 / 9);
}

/*******************************************/
void printTemperatures(int min, int max) {
    int t = min;
    while (t <= max) {
        printf("%+4d - %+d\n", t, fahrenheitToCelsius(t));
        t = t + 1;
    }
}

/*************************/
void printNRandom(int n) {
    int i = 1;
    while (i <= n) {
        printf("%d\n", rand());
        i = i + 1;
    }
}