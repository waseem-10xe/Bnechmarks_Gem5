#include <stdio.h>
int main(void)
{
    int n;

    printf("Enter a number of your own choice: ");
    scanf("%d", &n);

    if (n % 2 == 0){
        printf("%d is even number\n", n);
    }

    return 0;
}
