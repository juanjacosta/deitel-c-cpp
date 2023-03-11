#include <stdio.h>

int main()
{
    int var1 = 10;
    int *ptrVar = &var1;

    printf("Valor de var1: %d", var1);

    *ptrVar = 30;
    
    printf("\n\n");
    printf("Valor de var1: %d", var1);

    printf("\n\n");



    return 0;
}