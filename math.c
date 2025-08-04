#include <stdio.h>
#include <math.h>

int main() {
    double num = 16.0, base = 2.0, exponent = 3.0;

    // Sq root
    printf("Square root of %.2f is %.2f\n", num, sqrt(num));

    // Power
    printf("%.2f raised to the power %.2f is %.2f\n", base, exponent, pow(base, exponent));

    // Sine
    double angle = 45.0; 
    double radians = angle * (M_PI / 180.0); 
    printf("Sine of %.2f degrees is %.2f\n", angle, sin(radians));

    return 0;
}
