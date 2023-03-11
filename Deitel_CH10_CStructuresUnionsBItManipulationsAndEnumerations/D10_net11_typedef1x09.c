#include <stdio.h>
#include <string.h>

enum tipo_empleado {Analista, Programador};

typedef enum tipo_empleado Tipo;

// ESTRUCTURA DEFINIDA DE LA FORMA CONVENCIONAL
struct empleado_t{
    char nombre[20];
    char apellido[20];
    char nif[10];
    char telefono[10];
    // enum tipo_empleado tipo;
    Tipo tipo;
};

// SINONIMO DEL TIPO DE DATO ESTRUCTURA CON TYPEDEF  
typedef struct empleado_t Empleado;

// void imprimir(struct empleado_t* empleado);
void imprimir(Empleado* empleado);

typedef int entero;

// int main()
entero main()
{
    // struct empleado_t empl;
    Empleado empl;

    strncpy(empl.nombre, "Juan", strlen("Juan") + 1);
    strncpy(empl.apellido, "Perez", strlen("Perez") + 1);
    strncpy(empl.nif, "00000014Z", strlen("00000014Z") + 1);
    strncpy(empl.telefono, "91234578", strlen("912345678") + 1);
    imprimir(&empl);

    return 0;
}

// void imprimir(struct empleado_t* empleado)
void imprimir(Empleado* empleado)
{
    printf("%s %s\n", empleado->nombre, empleado->apellido);
    printf("DNI: %s\n", empleado->nif);
    printf("Telefono: %s\n", empleado->telefono);
    
    if (empleado->tipo == Analista){
        printf("Este empleado es un analista.\n");
    }
    else{
        printf("Este empleado es un programador.\n");
    }
}