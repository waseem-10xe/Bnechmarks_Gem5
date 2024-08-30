#include <stdio.h>

int main(void)
{
    int height = 2, length =3, width = 4, volume;

    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    

    return 0;
}
