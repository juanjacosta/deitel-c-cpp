#include <stdio.h>

int main()
{
    int arreglo[6] = {1, -10, 0, -1, 20, 100};
    int *ptrArray = arreglo;

    printf("Contenido de la direccion de memoria apuntada por ptrArray: %d\n", *ptrArray);
    ptrArray++;
    printf("Contenido de la direccion de memoria apuntada por ptrArray: %d\n", *ptrArray);
    ptrArray += 4;
    printf("Contenido de la direccion de memoria apuntada por ptrArray: %d\n", *ptrArray);
    ptrArray -= 5;
    printf("Contenido de la direccion de memoria apuntada por ptrArray: %d\n", *ptrArray);

    return 0;
}