#include <stdio.h>

// Function to find HCF using the Euclidean algorithm
int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find LCM using the HCF
int findLCM(int a, int b) {
    return (a * b) / findHCF(a, b);
}

int main() {
    int num1, num2;

    // Taking input from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Finding LCM
    int lcm = findLCM(num1, num2);

    // Printing the result
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}

