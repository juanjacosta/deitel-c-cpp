#include <stdio.h>

struct Persona{
    // char nombre[16];
    char *nombre;
    int edad;
}
p1 = {"Juan", 21},
p2 = {"Maria", 7};
;

int main()
{
    printf("===========================\n");
    printf("\tPersona 1\n");
    printf("===========================\n");
    printf("Nombre: %s\n", p1.nombre);
    printf("Edad  : %d\n", p1.edad);
    printf("===========================\n");
    printf("\tPersona 2\n");
    printf("===========================\n");
    printf("Nombre: %s\n", p2.nombre);
    printf("Edad  : %d\n", p2.edad);


    return 0;
}