#include <stdio.h>

int main(void) {
    int x = 24;
    do {
        x -= 4;
        printf("%d\n", x);
    } while (x > 0);
    return 0;
}