#include <stdio.h>

// Prototypes
double avgStudentGradesSentinel(void);
double getGrade(void);

int main(void) {
        //printf("The average grade is %.2lf\n", avgStudentGradesSentinel());
        // for (int value = 15; value <=45; value += 5) {
        //     printf("%d\n", value);
        // }
        // for (int c = 100; c >= 2; c--) {
        //     printf("%d\n", c);
        // }
        for (int i = 0; i < 5; i++){
        }
    return 0;
}

// No negative numbers accepted, except -1. 
// No division by zero when no grades are entered.
double avgStudentGradesSentinel(void) {
    double grade = getGrade(); // The current student grade
    double total_grade = 0;
    int n_grades = 0;

    while (grade != -1) { // Only enter if grade isn't -1  
        if (grade >= 0) {
            total_grade += grade;
            n_grades++;
        }
        getGrade();
    }
    
    if (n_grades == 0) {
        puts("No valid grades entered.");
        return 0;
    }
    
    return total_grade / n_grades;
}

double getGrade(void) {
    // DO NOT return grades < -1 or > 100
    double grade = 0;
    do {
        printf("Enter a grade (-1 to exit): ");
        scanf("%lf", &grade);
        if (grade < -1 || grade > 100) {
            puts("The grade should be in [-1; 100]");
        }
    } while(grade < -1 || grade > 100);

    return grade;
}