//NATHAN KINGORI MACHIRA ENE212-0082/2021
#include <stdio.h>

// Function to perform addition
int add(int num1, int num2) {
    return num1 + num2;
}

// Function to perform subtraction
int subtract(int num1, int num2) {
    return num1 - num2;
}

int main() {
    int num1, num2;

    // Prompt user to enter the first num12ber
    printf("Enter the first number: ");
    scanf_s("%d", &num1);

    // Prompt user to enter the second number
    printf("Enter the second number: ");
    scanf_s("%d", &num2);

    // Calculate and print the sum
    int sum = add(num1, num2);
    printf("The sum of your numbers is: %d\n", sum);

    // Calculate and print the difference
    int difference = subtract(num1, num2);
    printf("The difference of your numbers is: %d\n", difference);

    // Print the combined result
    printf("The sum and difference are: %d and %d\n", sum, difference);

    return 0;
}
