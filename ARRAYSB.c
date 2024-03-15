#include <stdio.h>

#define MAX_SIZE 12

// Function prototypes
void insertElement(int arr[], int *size, int element); // Declare a function to insert an element into the array
void deleteElement(int arr[], int *size, int element); // Declare a function to delete an element from the array
void sortAscending(int arr[], int size); // Declare a function to sort the array in ascending order
void printArray(int arr[], int size); // Declare a function to print the elements of the array

int main() {
    int arr[MAX_SIZE]; // Declare an integer array with maximum size MAX_SIZE
    int size = 0; // Initialize the size of the array to 0

    // Prompt user to insert 12 elements
    printf("Enter 12 elements:\n"); 
    for (int i = 0; i < MAX_SIZE; i++) { // Loop to input 12 elements
        int element; 
        scanf("%d", &element); // Read an integer input from the user
        insertElement(arr, &size, element); // Call insertElement function to insert the element into the array
    }

    // Display the sorted array
    printf("Sorted array: "); 
    printArray(arr, size); // Call printArray function to display the sorted array

    // Delete an element
    int elementToDelete; 
    printf("Enter element to delete: "); 
    scanf("%d", &elementToDelete); // Read the element to delete from the user
    deleteElement(arr, &size, elementToDelete); // Call deleteElement function to delete the specified element from the array
    printf("Array after deleting %d: ", elementToDelete); 
    printArray(arr, size); // Call printArray function to display the array after deletion

    // Insert the deleted element back
    insertElement(arr, &size, elementToDelete); // Call insertElement function to insert the deleted element back into the array
    printf("Array after inserting %d: ", elementToDelete); 
    printArray(arr, size); // Call printArray function to display the array after insertion

    return 0; // Return 0 to indicate successful execution
}

// Function to insert an element into the array in ascending order
void insertElement(int arr[], int *size, int element) {
    if (*size >= MAX_SIZE) { // Check if the array is full
        printf("Array is full. Cannot insert.\n");
        return; // Exit the function if the array is full
    }

    arr[*size] = element; // Insert the element into the array
    (*size)++; // Increment the size of the array
    sortAscending(arr, *size); // Call sortAscending function to sort the array in ascending order
}

// Function to delete an element from the array
void deleteElement(int arr[], int *size, int element) {
    int i, found = 0; // Declare variables for loop iteration and element found flag
    for (i = 0; i < *size; i++) { // Loop through the array
        if (arr[i] == element) { // Check if the current element matches the element to delete
            found = 1; // Set the found flag to true
            break; // Exit the loop if the element is found
        }
    }

    if (found) { // Check if the element is found
        for (int j = i; j < *size - 1; j++) { // Loop to shift elements to the left after deletion
            arr[j] = arr[j + 1]; // Shift the elements to the left
        }
        (*size)--; // Decrement the size of the array
    } else {
        printf("Element not found in the array.\n"); // Print a message if the element is not found
    }
}

// Function to sort the array in ascending order using bubble sort algorithm
void sortAscending(int arr[], int size) {
    int temp, i, j; // Declare variables for temporary storage and loop iteration
    for (i = 0; i < size - 1; i++) { // Outer loop for pass through the array
        for (j = 0; j < size - i - 1; j++) { // Inner loop for comparison and swapping
            if (arr[j] > arr[j + 1]) { // Check if the current element is greater than the next element
                temp = arr[j]; // Swap the elements if they are out of order
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the elements of the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) { // Loop to print each element of the array
        printf("%d ", arr[i]); // Print the current element followed by a space
    }
    printf("\n"); // Move to the next line after printing all elements
}


/*BUBLE SORT ALGORITHM
Here's how it works with your numbers: 4, 3, 7, 8, 9, 2.

First Pass:

Compare 4 and 3. Since 4 is greater than 3, swap them: 3, 4, 7, 8, 9, 2.
Compare 4 and 7. No swap needed: 3, 4, 7, 8, 9, 2.
Compare 7 and 8. No swap needed: 3, 4, 7, 8, 9, 2.
Compare 8 and 9. No swap needed: 3, 4, 7, 8, 9, 2.
Compare 9 and 2. Swap them: 3, 4, 7, 8, 2, 9.
Second Pass:

Compare 3 and 4. No swap needed: 3, 4, 7, 8, 2, 9.
Compare 4 and 7. No swap needed: 3, 4, 7, 8, 2, 9.
Compare 7 and 8. No swap needed: 3, 4, 7, 8, 2, 9.
Compare 8 and 2. Swap them: 3, 4, 7, 2, 8, 9.
Compare 8 and 9. No swap needed: 3, 4, 7, 2, 8, 9.
Third Pass:

Compare 3 and 4. No swap needed: 3, 4, 7, 2, 8, 9.
Compare 4 and 7. No swap needed: 3, 4, 7, 2, 8, 9.
Compare 7 and 2. Swap them: 3, 4, 2, 7, 8, 9.
Compare 7 and 8. No swap needed: 3, 4, 2, 7, 8, 9.
Compare 8 and 9. No swap needed: 3, 4, 2, 7, 8, 9.
Fourth Pass:

Compare 3 and 4. No swap needed: 3, 4, 2, 7, 8, 9.
Compare 4 and 2. Swap them: 3, 2, 4, 7, 8, 9.
Compare 4 and 7. No swap needed: 3, 2, 4, 7, 8, 9.
Compare 7 and 8. No swap needed: 3, 2, 4, 7, 8, 9.
Compare 8 and 9. No swap needed: 3, 2, 4, 7, 8, 9.
Fifth Pass:

Compare 3 and 2. Swap them: 2, 3, 4, 7, 8, 9.
Compare 3 and 4. No swap needed: 2, 3, 4, 7, 8, 9.
Compare 4 and 7. No swap needed: 2, 3, 4, 7, 8, 9.
Compare 7 and 8. No swap needed: 2, 3, 4, 7, 8, 9.
Compare 8 and 9. No swap needed: 2, 3, 4, 7, 8, 9.
Now, after the fifth pass, the list is sorted in ascending order: 2, 3, 4, 7, 8, 9. That's how the Bubble Sort algorithm works.
*/