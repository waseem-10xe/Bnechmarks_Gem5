
#include <stdbool.h>//library for boolean values
#include <stdio.h>

bool is_prime(int n)
{
    int divisor;

    if(n <= 1)
    {
        return false;
    }

    for(divisor = 2; divisor * divisor <= n; divisor++)//to calculate a prime number we always start by dividing from 2
    { // square of divisor is a way to find whether the square root of n is a prime
        if(n % divisor == 0)
        {
            return false; //parameter is not a prime number because it is divisible by other digit
        }else{
            return true; // is a prime number
        }
    }
}

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(is_prime(n))
    {
        printf("Prime number\n");
    }else{
        printf("Not prime\n");
    }

    return 0;
}
