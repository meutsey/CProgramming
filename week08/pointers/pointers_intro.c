#include <stdio.h>

void setToZero(int *n);

double productPointers(double *p1, double *p2);

int main(void) {
    int luck = 100;
    double n1 = 50.5;
    double n2 = 20.8;
    // Access
    printf("%d\n", luck);
    // Modify
    luck += 10;

    printf("The address of luck is %p\n", &luck);

    // Pointer - is a variable that stores memory addresses (i.e. 0x7ffccef89064)

    // Create a pointer
    // <data type> *pointerName;

    // Create an integer pointer
    int *luck_ptr = &luck; // luck_ptr stores the address of the variable luck

    // Access the data the pointer is pointing to
    // Operator (*) - dereferencing operator

    printf("Dereference luck_ptr %d\n", *luck_ptr);

    // Modify the data through the pointer
    *luck_ptr = 500;
    printf("The value of luck is %d\n", luck);

    // Passing by-reference
    setToZero(&luck);
    printf("The value of luck after setting to zero is %d\n", luck);

    printf("The product of n1 and n2 is %.2lf\n", productPointers(&n1, &n2));

    return 0;
} 

void setToZero(int *n) {
    *n = 0;
}

double productPointers(double *p1, double *p2) {
    return (*p1) * (*p2);
}