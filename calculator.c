#include <stdio.h>
#include <math.h>

// Function prototypes
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
float modulus(float num1, float num2);
float power(float num, float exponent);

int main() {
    char operator;
    float num1, num2, result;

    // Input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /, %, ^): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        case '%':
            result = modulus(num1, num2);
            break;
        case '^':
            result = power(num1, num2);
            break;
        default:
            printf("Invalid operator\n");
            return 1; // Exit with an error code
    }

    // Output the result
    printf("Result: %f\n", result);

    return 0; // Exit successfully
}

// Function to add two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to subtract two numbers
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function to multiply two numbers
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to divide two numbers
float divide(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero\n");
        return 0; // Return a default value in case of division by zero
    }
}

// Function to calculate modulus
float modulus(float num1, float num2) {
    if (num2 != 0) {
        return fmod(num1, num2);
    } else {
        printf("Error: Modulus by zero\n");
        return 0; // Return a default value in case of modulus by zero
    }
}

// Function to calculate power
float power(float num, float exponent) {
    return pow(num, exponent);
}#include <stdio.h>
#include <math.h>

// Function prototypes
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
float modulus(float num1, float num2);
float power(float num, float exponent);

int main() {
    char operator;
    float num1, num2, result;

    // Input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /, %, ^): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        case '%':
            result = modulus(num1, num2);
            break;
        case '^':
            result = power(num1, num2);
            break;
        default:
            printf("Invalid operator\n");
            return 1; // Exit with an error code
    }

    // Output the result
    printf("Result: %f\n", result);

    return 0; // Exit successfully
}

// Function to add two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to subtract two numbers
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function to multiply two numbers
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to divide two numbers
float divide(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero\n");
        return 0; // Return a default value in case of division by zero
    }
}

// Function to calculate modulus
float modulus(float num1, float num2) {
    if (num2 != 0) {
        return fmod(num1, num2);
    } else {
        printf("Error: Modulus by zero\n");
        return 0; // Return a default value in case of modulus by zero
    }
}

// Function to calculate power
float power(float num, float exponent) {
    return pow(num, exponent);
}
