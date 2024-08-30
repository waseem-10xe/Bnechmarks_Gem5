#include <stdio.h>

int main() {
    int var = 10;  // A normal integer variable
    int *ptr;     // A pointer variable that can point to an integer

    ptr = &var;   // Store the address of var in ptr

    // Output the value of var
    printf("Value of var: %d\n", var);

    // Output the address of var using the address-of operator &
    printf("Address of var: %p\n", (void*)&var);

    // Output the address stored in ptr
    printf("Address stored in ptr: %p\n", (void*)ptr);

    // Output the value at the address stored in ptr using the dereference operator *
    printf("Value at the address stored in ptr: %d\n", *ptr);

    // Pointer arithmetic
    int arr[5] = {10, 20, 30, 40, 50};
    int *arr_ptr = arr;  // Point to the first element of the array

    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(arr_ptr + %d) = %d\n", i, *(arr_ptr + i));
    }

    // Modify a value using a pointer
    *ptr = 20;
    printf("Modified value of var: %d\n", var);

    return 0;
}

