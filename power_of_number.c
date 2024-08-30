#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;
    
    printf("Enter the base: ");
    scanf("%lf", &base);
    
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);
    
    result = pow(base, exponent);
    printf("%lf raised to the power of %lf is %lf\n", base, exponent, result);
    
    return 0;
}

