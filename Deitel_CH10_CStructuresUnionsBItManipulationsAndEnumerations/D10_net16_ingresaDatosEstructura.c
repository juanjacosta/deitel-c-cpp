#include <stdio.h>

typedef struct{
    char nombre[16];
    // char *nombre;
    int edad;
}Persona;

int main()
{
    Persona p1;

    printf("Ingresa Datos Persona\n");
    printf("Nombre: ");
    // scanf("%s", p1.nombre);
    gets(p1.nombre);
    printf("Edad  : ");
    scanf("%d", &p1.edad);

    printf("\nDatos Ingresados\n");
    printf("%s, %d\n", p1.nombre, p1.edad);


    return 0;
}