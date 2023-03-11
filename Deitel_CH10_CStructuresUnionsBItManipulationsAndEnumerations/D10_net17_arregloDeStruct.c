#include <stdio.h>
#include <string.h>

#define TAM 10

typedef struct{
    char *titulo;
    char artista[16];
    int numCanciones;
    float precio;
    char *fechaCompra;
}ColeccionCD;

int main()
{
    ColeccionCD cd[TAM];
    int i;

    // cd[0].titulo = "Segun Nosotros";
    // strcpy(cd[0].artista, "Nampa Basico");
    // cd[0].numCanciones = 12;
    // cd[0].precio = 5.2;
    // cd[0].fechaCompra = "07/12/19";

    for (i = 0; i < TAM ; i++){
        cd[i].titulo = "Segun Nosotros";
        strcpy(cd[i].artista, "Nampa Basico");
        cd[i].numCanciones = 12 + i;
        cd[i].precio = 5.2 + i;
        cd[i].fechaCompra = "07/12/19";
    }

    for (i = 0; i < TAM; i++){
        printf("Titulo      : %s\n", cd[i].titulo);
        printf("Artista     : %s\n", cd[i].artista);
        printf("# Canciones : %d\n", cd[i].numCanciones);
        printf("Precio      : USD$%.2f\n", cd[i].precio);
        printf("Fecha Compra: %s\n", cd[i].fechaCompra);
        printf("\n");
    }

    return 0;
}