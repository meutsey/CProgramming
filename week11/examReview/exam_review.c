#include <stdio.h>

void fahrenheitToCelsius(int *lakeland, int *stevensville, int *easton);
void locationTemp(int *lakeland, int *stevensville, int *easton);
int conversion(int city);

int main(void) {
    int lakeland = 0;
    int stevensville = 0;
    int easton = 0;
    locationTemp(&lakeland, &stevensville, &easton);
    fahrenheitToCelsius(&lakeland, &stevensville, &easton);
    printf("The temp in celsius in Lakeland is: %d\n", lakeland);
    printf("The temp in celsius in Stevensville is: %d\n", stevensville);
    printf("The temp in celsius in Easton is: %d\n", easton);
    return 0;
}

void fahrenheitToCelsius(int *lakeland, int *stevensville, int *easton) {
    *lakeland = conversion(*lakeland);
    *stevensville = conversion(*stevensville);
    *easton = conversion(*easton);
}

void locationTemp(int *lakeland, int *stevensville, int *easton) {
    printf("Enter a temperature for Lakeland: ");
    scanf("%d", lakeland);

    printf("Enter a temperature for Stevensville: ");
    scanf("%d", stevensville);

    printf("Enter a temperature for Easton: ");
    scanf("%d", easton);
}

int conversion(int city) {
    return ((city - 32) * 5) / 9;
}