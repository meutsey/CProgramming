/* 
    The program converts the given number of seconds to HMS

    i.e.) 65 seconds -> 0 hours 1 minute 5 seconds

*/

#include <stdio.h>

int main() {
    int seconds = 0;
    int minutes = 0;
    int remaining_seconds = 0;
    int hours = 0;
    int remaining_minutes = 0;

    // Get seconds from the input
    puts("Enter the number of seconds: ");
    scanf("%d", &seconds);

    // Calculate the number of minutes
    minutes = seconds / 60;
    remaining_seconds = seconds % 60;
    hours = minutes / 60;
    remaining_minutes = minutes % 60;

    // Print the result
    printf("%d seconds is %d hours %d minutes and %d seconds\n", seconds, hours, remaining_minutes, remaining_seconds);

    return 0;
}