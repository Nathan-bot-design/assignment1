#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;

    // Reverse the number
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNum == reversedNum)
        return 1; // It is a palindrome
    else
        return 0; // It is not a palindrome
}

int main() {
    int n;

    // Prompt user to enter the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is palindrome or not
    if (isPalindrome(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);

    return 0;
}
