#include <stdio.h>

#define SIZE 11


int main(void) {
    int c[5] = {-45, 6, 0, 72, 1543};
    printf("The sum of c[0] and c[2] are: %d\n", c[0] + c[2]); // First element = c[0] Third Element = c[3 - 1]

    double d_arr[SIZE] = {0.0}; // Initialized to size = SIZE and with all zeroes
    printf("The value of d_arr[3] is: %.2lf\n", d_arr[3]); // Print the fourth element of d_arr

    d_arr[5] = 4.53;
    printf("The value of d_arr[5] is: %.2lf\n", d_arr[5]); // Print the sixth element of d_arr

    printf("The second element is: %.2lf \nThe last element is: %.2lf\n", d_arr[1], d_arr[10]);

    return 0;
}