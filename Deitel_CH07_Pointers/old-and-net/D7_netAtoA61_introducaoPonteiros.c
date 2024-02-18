#include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;

    int *ptrX;
    ptrX = &x;

    int *ptrY;
    ptrY = &y;



    printf("Variables\n====================\n");
    printf("x: %i\n", x);
    printf("y: %i\n", y);

    printf("Punteros\n====================\n");
    printf("ptrX: %p\n", ptrX);
    printf("ptrY: %p\n", ptrY);

    *ptrX = y;
    printf("ptrX: %p\n", ptrX);
    printf("x: %i\n", x);

    return 0;
}