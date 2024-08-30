#include <stdio.h>

int main() {
    // Write C code here
int i;
for(i=0; i<1000; i++){
    if(i%2==0){
       // printf("loop is continue by esacaping the even number\n");
        continue;
    }
    printf("value of i is %d\n",i);
}

    return 0;
}
