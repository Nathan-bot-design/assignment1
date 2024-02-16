#include <stdio.h>

// Function to generate Fibonacci series up to n
void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci series up to %d: ", n);

    // Print the first two numbers of Fibonacci series
    printf("%d, %d, ", first, second);

    // Generate and print the rest of the series
    next = first + second;
    while (next <= n) {
        printf("%d, ", next);
        first = second;
        second = next;
        next = first + second;
    }
    printf("\n");
}

int main() {
    int n;

    // Prompt user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Generate and print Fibonacci series up to n
    generateFibonacci(n);

    return 0;
}
