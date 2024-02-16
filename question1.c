//NATHAN KINGORI MACHIRA 
//ENE212-0082/2021
#include <stdio.h>

// Function to perform addition
int add(int num1, int num2) {
    return num1 + num2;
}

// Function to perform subtraction
int subtract(int num1, int num2) {
    return num1 - num2;
}

// Function to perform multiplication
int multiply(int num1, int num2) {
    return num1 * num2;
}

// Function to perform division
float divide(int num1, int num2) {
    if (num2 == 0) {
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    return (float)num1 / num2;
}

// Function to prompt user for input
int getInput() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int main() {
    // Prompt user to enter the first number
    int num1 = getInput();

    // Prompt user to enter the second number
    int num2 = getInput();

    // Calculate and print the sum
    int sum = add(num1, num2);
    printf("The sum of your numbers is: %d\n", sum);

    // Calculate and print the difference
    int difference = subtract(num1, num2);
    printf("The difference of your numbers is: %d\n", difference);

    // Calculate and print the product
    int product = multiply(num1, num2);
    printf("The product of your numbers is: %d\n", product);

    // Calculate and print the division
    float quotient = divide(num1, num2);
    printf("The division of your numbers is: %.2f\n", quotient);

    return 0;
}
