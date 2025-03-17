#include <stdio.h>

int splitDigits(int n, int *tens, int *ones);

// TODO
// Receive two doubles, receive two addresses
// Updates sum with d1 + d2
// Updates avg with the average of d1 and d2
void sumAndAvg(double d1, double d2, double *sum, double *avg);

int main(void) {
    int n = 65;
    int tens = 0;
    int ones = 0;

    splitDigits(n, &tens, &ones); // Lets you return multiple values from one function instead of a single value

    printf("%d has %d tens and %d ones\n", n, tens, ones);

    double d1 = 150.4;
    double d2 = 63.4;
    double sum = 0;
    double avg = 0;
    
    sumAndAvg(d1, d2, &sum, &avg);

    printf("The sum of %.2lf and %.2lf is %.2lf and the average is %.2lf\n", d1, d2, sum, avg);

    return 0;
}

/*
    Split the given integer n into tens and ones
    Return 1 if not two digit number, 0 if it is
*/
int splitDigits(int n, int *tens_ptr, int *ones_ptr) {
    if (n < 10 || n > 99) {
        // Incorrect value of n
        return 1;
    }
    *tens_ptr = n / 10;
    *ones_ptr = n % 10;

    return 0;
}

void sumAndAvg(double d1, double d2, double *sum, double *avg) {
    *sum = d1 + d2;
    *avg = (*sum) / 2;
}