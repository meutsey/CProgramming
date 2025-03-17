#include <stdio.h>

int main(void) {
    // for (int i = 20; i >= -10; i -= 6) {
    //     printf("%d\n", i);
    // }

    int i = 20;
    do {
        printf("%d\n", i);
        i -= 6;
    } while (i >= -10);

    return 0;
}