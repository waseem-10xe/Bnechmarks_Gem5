#include <stdio.h>
#include <stdlib.h>

// Define the structure for the vector
typedef struct {
    int *data;       // Pointer to the data array
    size_t size;     // Number of elements currently in the vector
    size_t capacity; // Total capacity of the vector
} Vector;

// Function to initialize a vector
void initVector(Vector *vector, size_t initialCapacity) {
    vector->data = (int*)malloc(initialCapacity * sizeof(int));
    vector->size = 0;
    vector->capacity = initialCapacity;
}

// Function to resize the vector
void resizeVector(Vector *vector, size_t newCapacity) {
    int *newData = (int*)realloc(vector->data, newCapacity * sizeof(int));
    if (newData) {
        vector->data = newData;
        vector->capacity = newCapacity;
    } else {
        printf("Reallocation failed\n");
        free(vector->data);
        exit(EXIT_FAILURE);
    }
}

// Function to add an element to the vector
void addElement(Vector *vector, int element) {
    if (vector->size >= vector->capacity) {
        resizeVector(vector, vector->capacity * 2); // Double the capacity if needed
    }
    vector->data[vector->size++] = element;
}

// Function to get an element at a specific index
int getElement(Vector *vector, size_t index) {
    if (index < vector->size) {
        return vector->data[index];
    } else {
        printf("Index out of bounds\n");
        exit(EXIT_FAILURE);
    }
}

// Function to free the memory allocated to the vector
void freeVector(Vector *vector) {
    free(vector->data);
    vector->data = NULL;
    vector->size = 0;
    vector->capacity = 0;
}

// Function to display the vector
void displayVector(Vector *vector) {
    for (size_t i = 0; i < vector->size; i++) {
        printf("%d ", vector->data[i]);
    }
    printf("\n");
}

int main() {
    Vector vector;
    initVector(&vector, 4); // Initialize vector with capacity of 4

    addElement(&vector, 10);
    addElement(&vector, 20);
    addElement(&vector, 30);
    addElement(&vector, 40);
    addElement(&vector, 50); // This will trigger a resize

    printf("Vector elements: ");
    displayVector(&vector);

    printf("Element at index 2: %d\n", getElement(&vector, 2));

    freeVector(&vector); // Free the allocated memory
    return 0;
}

