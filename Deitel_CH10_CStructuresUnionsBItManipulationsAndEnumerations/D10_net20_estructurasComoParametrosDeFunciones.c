#include <stdio.h>

typedef struct{
    char *nombre;
    int edad;
    float salario;
}Persona;

// void imprimePersona(Persona p);
void imprimePersona(const Persona *p);

int main()
{
    Persona Pedro = {"Pedro", 25, 1000.0f};
    Persona Juan = {"Juan", 29, 5000.0f};

    // imprimePersona(Pedro);
    // imprimePersona(Juan);
    imprimePersona(&Pedro);
    imprimePersona(&Juan);

    return 0;
}

// void imprimePersona(Persona p)
void imprimePersona(const Persona *p)
{
    // printf("Nombre : %s\n", p.nombre);
    // printf("Edad   : %d\n", p.edad);
    // printf("Salario: %.2f\n", p.salario);
    printf("Nombre : %s\n", p->nombre);
    printf("Edad   : %d\n", p->edad);
    printf("Salario: %.2f\n", p->salario);
    printf("\n");
}