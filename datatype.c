#include <stdio.h>

int main() {
    
    int age = 25;
    printf("Age (int): %d\n", age);

   
    float height = 5.9;
    printf("Height (float): %.1f\n", height);

    
    double pi = 3.14159265359;
    printf("Value of Pi (double): %.11lf\n", pi);

    
    char grade = 'A';
    printf("Grade (char): %c\n", grade);

  
    _Bool isPassed = 1; // 1 for true, 0 for false
    printf("Passed (boolean): %s\n", isPassed ? "true" : "false");

    return 0;
}
