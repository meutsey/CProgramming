/*
    Practice with non-void functions.
*/

#include <stdio.h>

// Function prototypes
// The function named getFive returns an integer and takes no arguments
int getFive(void);

// Function prints the given value
// The function named printCourse returns nothing and takes one integer argument, named course_number
void printCourse(int course_number);

// Function that describes weather
void describeWeather(int temp);

// Function that returns a double (i.e. 2.5 instead of 2), returns kilometers for given miles
double milesToKms(int miles);

// Function that returns miles for given kilometers
double kmsToMiles(int kms);

int main(void) {
    int var;
    // Call a function
    var = getFive();
    //int course_input = 0;
    //scanf("%d", &course_input);

    printf("The value of var is %d\n", var);
    printCourse(2271);
   
   int temp = 0;
   printf("Enter a temperature: ");
   scanf("%d", &temp);
   describeWeather(temp);


    double miles = 0;
    printf("Enter a value for miles: ");
    scanf("%lf", &miles);
    printf("There are about %.2lf kms in %.2lf miles\n\n", milesToKms(miles), miles);
   
    double kms = 0;
    printf("Enter a value for kilometers: ");
    scanf("%lf", &kms);
    printf("There are about %.2lf miles in %.2lf kilometers\n\n", kmsToMiles(kms), kms);

    return 0;
}

////////////////////////////////////////////////
//Function definition
// Main function will not "see" the five variable, called the function's scope.
// Scope - variables are only known to a function within its body.
int getFive(void) {
    int five = 5;

    return five;
}

////////////////////////////////////////////////
void printCourse(int course_number) {
    printf("The course number is COP%d\n", course_number);
}

////////////////////////////////////////////////
void describeWeather(int temp) {
    if (temp > 75) {
        printf("The temperature is %d degrees, it is hot\n\n", temp);
    }
    else if (temp >= 65) {
       printf("The temperature is %d degrees, it is warm\n\n", temp);
    }
    else {
        printf("The temperature is %d degrees, it is cold\n\n", temp);
    }
}

////////////////////////////////////////////////
double milesToKms(int miles) {
    double kms = miles * 1.609;
    return kms;
}

////////////////////////////////////////////////
double kmsToMiles(int kms) {
    double miles = kms / 1.609;
    return miles;
}