#include <stdio.h>

int main()
{
    int x = 5;
    int *ptrX = &x; 

    /* printf("%d\n", x);
    printf("%x\n", &x);     // %x imprime hexadecimal
    printf("%p\n", &x);     // %p imprime punteros */

    printf("%d\n", x);
    printf("%d\n", *ptrX);
    

    return 0;
}