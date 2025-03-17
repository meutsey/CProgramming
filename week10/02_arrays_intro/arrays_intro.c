#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Symbolic constant #define NAME value
#define SIZE 1000

// Create a function to work w/ arrays
void printArray(int *arr, int size); // Needs a pointer w/ the data type of the array and an integer for the size of it
void initArrayWithRandom(int *arr, int size, int left, int right);
void setNegativeToZero();

int main(void) {
    srand(time(0));

    // Create an array of integers
    // <data type> name[size];
    int arr[SIZE];

    // Initialize the first element of the array w/ 999
    // Arrays start w/ index number '0' and finish at 'size - 1'
    arr[0] = 999;
    
    // Initialize last element of array w/ 111
    arr[SIZE - 1] = 111;

    // Print the first and last elements of the array
    printf("First %d; Last %d\n", arr[0], arr[SIZE - 1]);

    // Initialize an array w/ a loop    
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i;
    }

    // Reinitialize an array with the values from 10 to 100
    // 10 20 30 40 ... 100
    for (int i = 0; i < SIZE; i++) {
        arr[i] = (10 * i) + 10;
    }
    
    int val = 10;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = val;
        val += 10;
    }

    // Print an array
    printArray(arr, SIZE);

    // Reinitialize with random numbers from -100 to 100
    initArrayWithRandom(arr, SIZE, -100, 100);

    // Print an array
    printArray(arr, SIZE);

    // printf("%p\n", arr); // Name of array is a pointer to the first element of the array

    return 0;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    puts("");
}

void initArrayWithRandom(int *arr, int size, int left, int right) {
    // Reinitialize with random numbers from left to right
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (right - left + 1) + left; // rand() % (right bound - left bound + 1) + left bound
    }
}

// TODO 
// Create a function void setNegative to Zero();
// If you have any negative values, they become zeroes