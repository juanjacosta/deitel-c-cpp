#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct carta{           // Definición de la estructura carta
    const char *cara;
    const char *palo;
};

typedef struct carta Carta; // Nuevo tipo de nombre para la
                            // estructura baraja 

void llenaMazo(Carta * const wMazo, const char * wCara[], 
    const char * wPalo[]);
void barajar(Carta * const wMazo);
void repartir(const Carta * const wMazo);

int main()
{
    Carta mazo[52];         // Define el arreglo carta

    // Inicializa arreglo de apuntadores
    const char *cara[] = {"As", "Dos", "Tres", "Cuatro", "Cinco",
        "Seis", "Siete", "Ocho", "Nueve", "Diez", "Jota", "Quina", "Rey"};

    // Inicializa arreglo de apuntadores
    const char *palo[] = {"Corazones", "Diamantes", "Treboles", "Espadas"};

    srand(time(NULL));

    llenaMazo(mazo, cara, palo);
    barajar(mazo);
    repartir(mazo);

    return 0;
}

void llenaMazo(Carta * const wMazo, const char * wCara[], 
    const char * wPalo[])
{
    int i;

    // Ciclo a través de wMazo 
    for (i = 0; i <= 51; i++){
        wMazo[i].cara = wCara[i % 13];
        wMazo[i].palo = wPalo[i % 13];
    }
}

void barajar(Carta * const wMazo)
{
    int i;          // contador
    int j;          // variable para almacenar valor aleatorio entre 0 - 51
    Carta temp;     // define la estructura temporal para intercambiar cartas 

    // Ciclo a través de wMazo para intercambiar aleatoriamente Baraja
    for (i = 0; i <= 51; i++){
        j = rand() % 52;
        temp = wMazo[i];
        wMazo[i] = wMazo[j];
        wMazo[j] = temp;
    }
}

void repartir(const Carta * const wMazo)
{
    int i;

    // Ciclo a través de wMazo
    for (i = 0; i <= 51; i++){
        printf("%5s de %-8s%c", wMazo[i].cara, wMazo[i].palo,
        (i + 1) % 2 ? '\t' : '\n');
    } 
}