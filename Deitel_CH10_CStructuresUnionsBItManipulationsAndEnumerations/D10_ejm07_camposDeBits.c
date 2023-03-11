/*
    Programa : D10_ejm07_camposDeBits.c 
    Proposito: Mostrar la capacidad de C de especificar el numero de bits en el
               que un miembro unsigned o int de una estructura o unión se almacena 
               
               Dentro de main se crea un arreglo mazo, que contiene 52 estructuras 
               struct cartaBit. La función llenaMazo inserta las 52 cartas en el 
               arreglo mazo, y la función repartir imprime las 52 cartas.

               Se accede a los miembros del campo de bits de la misma manera que con
               cualquier otra estructura. El miembro color se incluye como un medio
               para indicar el color de una carta en un sistema que permita el 
               despliegue del color.

               Deitel Cap 10 - pg. 374
*/

#include <stdio.h>

// Definición de la estructura cartaBit con campos de bits 
struct cartaBit{
    unsigned cara : 4;          // 4 bits (valores en el rango de 0 - 15)
    unsigned palo : 2;          // 2 bits (valores en el rango de 0 - 3)
    unsigned color : 1;         // 1 bit (valores en el rango de 0 - 1)
};

typedef struct cartaBit Carta;  // nuevo nombre de tipo para la estructura cartaBit 

void llenaMazo(Carta * const wMazo);
void repartir(const Carta * const wMazo);

int main()
{
    Carta mazo[52];

    llenaMazo(mazo);

    repartir(mazo);

    return 0;
}

// Inicializa Carta 
void llenaMazo(Carta * const wMazo)
{
    int i;                      // contador o iterador      

    for (i = 0; i <= 51; i++){  // ciclo a través de wMazo
        wMazo[i].cara = i % 13;
        wMazo[i].palo = i / 13;
        wMazo[i].color = i / 26;
    }
}

/*  Muestra las cartas en formato de dos columnas; el subíndice 
    de las cartas 0 a 25 es k1 (columna 1); el subindice de las 
    cartas 26 a 51 es k2 (columna 2) */
void repartir(const Carta * const wMazo)
{
    int k1;
    int k2;

    for (k1 = 0, k2 = k1 + 26; k1 <= 25; k1++, k2++){
        printf("Carta: %3d  Palo:%2d    Color:%2d   ",
            wMazo[k1].cara, wMazo[k1].palo, wMazo[k1].color);
        
        printf("Carta: %3d  Palo:%2d    Color:%2d\n",
            wMazo[k2].cara, wMazo[k2].palo, wMazo[k2].color);
    }
}