#include <stdio.h>
int main(void){
    int i = 3, j = 2, k = ++i + j++;

    printf("Value of K is %d\n", k);
    return 0;
}

