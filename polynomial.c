//* Write a program that asks the user to enter a value for x and then displays the value of the
//following polynomial:
//3.V5 + 2v4 - 5.r3 -x2 + lx - 6


#include <stdio.h>

int main(void){
    int x, polynomial;

    printf("Enter value for x: ");
    scanf("%d", &x);

    polynomial = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - 1 * (x * x) + 7 * (x) - 6;
    printf("The value of Polynomial is: %d", polynomial);

    return 0;
}
