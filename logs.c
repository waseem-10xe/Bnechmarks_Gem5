#include <stdio.h>
#include <math.h>

int main() {
    double value, result;
    
    printf("Enter a number: ");
    scanf("%lf", &value);
    
    if (value <= 0) {
        printf("Natural logarithm is not defined for non-positive numbers.\n");
    } else {
        result = log(value);
        printf("The natural logarithm of %lf is %lf\n", value, result);
    }
    
    return 0;
}

