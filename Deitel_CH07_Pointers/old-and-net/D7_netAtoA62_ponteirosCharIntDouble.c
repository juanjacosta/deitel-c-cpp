#include <stdio.h>

int main()
{
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *ptrX = &x;
    double *ptrY = &y;
    char *ptrZ = &z;

    double soma = *ptrX + *ptrY;

    int *ptrValor;
    ptrValor = -437029128;     // asigno el valor de memoria de x 


    printf("Endereco x = %p\nValor x = %i\n", ptrX, *ptrX);
    printf("Endereco y = %p\nValor y = %.2f\n", ptrY, *ptrY);
    printf("Endereco z = %p\nValor y = %i\n", ptrZ, *ptrZ);

    printf("\nSuma valores x + y con ponteiros: %f\n", soma);

    //printf("\nptrValor: %i\n", *ptrValor);

    return 0;
}