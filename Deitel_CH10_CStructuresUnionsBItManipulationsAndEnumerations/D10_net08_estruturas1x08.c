#include <stdio.h>
#include <string.h>

struct cuenta{
    char nombre[30];
    char apellido[40];
    int identificador;
    int saldo;
};

void imprimirDatos(struct cuenta *c);

int main()
{
    struct cuenta c1;
    strcpy(c1.nombre, "Pepito");
    strcpy(c1.apellido, "Perez");
    c1.identificador = 1235;
    c1.saldo = 400;

    imprimirDatos(&c1);

    return 0;
}

void imprimirDatos(struct cuenta *c)
{
    printf("El cliente %s %s tiene %d euros en cuenta.\n",
    // c->nombre, c->apellido, c->saldo);
    (*c).nombre, (*c).apellido, (*c).saldo);
}