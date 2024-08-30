#include <stdio.h>

// Function to print the elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }
}

int main() {
    // Declare and initialize an array
    int myArray[5] = {10, 20, 30, 40, 50};

    // Get the size of the array
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Print the elements of the array
    printf("Array elements:\n");
    printArray(myArray, size);

    // Modify an element in the array
    myArray[2] = 35;

    // Print the elements of the array after modification
    printf("\nArray elements after modification:\n");
    printArray(myArray, size);

    return 0;
}

