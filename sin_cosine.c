#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double angle, sine_result, cosine_result;
    
    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle);
    
    sine_result = sin(angle * PI / 180.0);
    cosine_result = cos(angle * PI / 180.0);
    
    printf("The sine of %lf degrees is %lf\n", angle, sine_result);
    printf("The cosine of %lf degrees is %lf\n", angle, cosine_result);
    
    return 0;
}

