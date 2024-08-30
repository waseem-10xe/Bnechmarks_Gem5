#include <stdio.h>

int main() {
    // Write C code here
int i;
for(i=0; i<1000; i++){
    if(i==100){
        printf("loop is breaking at 100\n");
        break;
    }
    printf("value of i is %d\n",i);
}

    return 0;
}
