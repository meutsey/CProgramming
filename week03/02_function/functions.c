/*

    Working with functions.

    Format of a function:

    <return type> <function_name>(<function argument(s)>) {    <-- Called a function header
        code of the function
    }

*/

#include <stdio.h>

// The function that doesn't return the value and doesn't take any inputs
// Called a function deinition
void print_course(void) {
    printf("You are in COP%d course\n", 2271);
}

void draw_circle(void) {
    puts("     * ");
    puts("   *   *");
    puts("    * *");
}


void draw_line(void) {
    puts("  -------");
}

void draw_intersection_body(void) {
    puts("    / \\");
    puts(" --/   \\--");
    puts("  /     \\");
}

void draw_intersection_legs(void) {
    puts("    / \\");
    puts("   /   \\");
    puts("  /     \\");
}

void draw_triangle(void) {
    puts("    / \\");
    puts("   /   \\");
    puts("  /     \\");
    puts("  -------");
}

void draw_stick_figure(void) {
    draw_circle();
    draw_triangle();
    draw_intersection_legs();
}

int main() {
    // Function call - Name of function and arguments <function_name>(arguments)
    //print_course();
    draw_stick_figure();

    return 0;
}