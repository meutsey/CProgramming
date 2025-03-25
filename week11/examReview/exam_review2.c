#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int *xPtr = NULL;
    int x = 985;
    xPtr = &x;
    printf("The address is: %p | The value is: %d\n", xPtr, *xPtr);

    x *= 2;
    printf("The address is: %p | The value is: %d\n", xPtr, *xPtr);
    
    *xPtr *= 2;
    printf("The address is: %p | The value is: %d\n", xPtr, *xPtr);
    
    *xPtr = sqrt(49);
    printf("The address is: %p | The value is: %d\n", xPtr, *xPtr);
    
    return 0;
}