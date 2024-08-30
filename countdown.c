#include <stdio.h>

void countdown(int n) 
{
    printf("T minus %d and counting\n", n);
}

int main(void)
{
    int n;

    for(n = 100; n > 0; n--){
        countdown(n);
    }
}

