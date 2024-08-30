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

int main() {
    int num1, num2;

    // Taking input from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure num1 is the greater number
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Finding HCF
    int hcf = findHCF(num1, num2);

    // Printing the result
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}

