#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

    // Save the original number
    originalNum = num;

    // Count the number of digits
    int digits = countDigits(num);

    // Calculate the sum of nth power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    // Check if the result is equal to the original number
    if (result == num)
        return 1; // It is an Armstrong number
    else
        return 0; // It is not an Armstrong number
}

int main() {
    int n;

    // Prompt user to enter the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is an Armstrong number or not
    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
