#include <stdio.h>

#define TAM 1

typedef struct{
    char direccion[16];
    char ciudad[16];
    char barrio[16];
}InfoDireccion;

typedef struct{
    char nombre[16];
    InfoDireccion dirEmpleado;
    double salario;
}Empleado;

int main()
{
    Empleado emp[TAM];

    /* Ingresa datos */
    for (int i = 0; i < TAM; i++){
        printf("Nombre   : ");scanf("%s", emp[i].nombre);
        printf("Direccion: ");scanf("%s", emp[i].dirEmpleado.direccion);
        printf("Ciudad   : ");scanf("%s", emp[i].dirEmpleado.ciudad);
        printf("Barrio   : ");scanf("%s", emp[i].dirEmpleado.barrio);
        printf("Salario  : ");scanf("%lf", &emp[i].salario);
        printf("\n");
    }

    /* Imprime datos */
    for (int i = 0; i < TAM; i++){
        printf("Nombre   : %s\n", emp[i].nombre);
        printf("Direccion: %s\n", emp[i].dirEmpleado.direccion);
        printf("Ciudad   : %s\n", emp[i].dirEmpleado.ciudad);
        printf("Barrio   : %s\n", emp[i].dirEmpleado.barrio);
        printf("Salario  : %.2f\n", emp[i].salario);
    }

    return 0;
}