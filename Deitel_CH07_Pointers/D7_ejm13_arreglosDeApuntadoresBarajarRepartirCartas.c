/*
    Programa : D7_ejm13_arreglosDeApuntadoresBarajarRepartirCartas.c
    Propósito: Mostrar el uso de arreglos de apuntadores, mediante un arreglo 
               de cadenas. En este caso ya que cada elemento del arreglo es 
               una cadena, cada elemento por ser un apuntador es en realidad, 
               un apuntador al 1er caracter de la cadena. 

               Ejm Deitel - Cap 7 - Ejm 7.24 - pg 261
    Fecha    : 24/09/2019
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void baraja(int wMazo[][13]);
void reparte(const int wMazo[][13], const char *wCara[], const char *wPalo[]);

int main()
{
    const char *palo[4] = {"corazones", "Diamantes", "Treboles", "Espadas"};            // inicializa el arreglo palo 
    const char *cara[13] = {"As", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete",    // inicializa el arreglo cara 
                            "Ocho", "Nueve", "Diez", "Jota", "Quina", "Rey"};
    int mazo[4][13] = {0};

    srand(time(0));             // semilla del generador de numeros aleatorios

    baraja(mazo);
    reparte(mazo, cara, palo);

    return 0;
}

void baraja(int wMazo[][13])
{
    int fila;       // numero de fila 
    int columna;    // numero de columna 
    int carta;      // contador 

    for (carta = 1; carta <= 52; carta++){      // elige aleatoriamente un espacio para cada una de las 52 cartas 

        do {
            fila = rand() % 4;                  // elige una nueva ubicacion al azar hasta que encuentra un espacio vacio
            columna = rand() % 13;
        } while (wMazo[fila][columna] != 0);

        wMazo[fila][columna] = carta;           // coloca el numero de carta en el espacio vacio del mazo 
    }
}

void reparte(const int wMazo[][13], const char *wCara[], const char *wPalo[])   // reparte las cartas del mazo 
{
    int fila;       // numero de fila 
    int columna;    // numero de columna 
    int carta;      // contador 

    for (carta = 1; carta <= 52; carta++){      // reparte cada una de las 52 cartas 

        for (fila = 0; fila <= 3; fila++){      // realiza el ciclo a traves de las filas de wMazo 

            for (columna = 0; columna <= 12; columna++){    //realiza el ciclo a traves de las columnas de wMazo en la fila actual
                
                if (wMazo[fila][columna] == carta){                         // si el espacio contiene la carta actual, 
                    printf("%6s de %-9s%c", wCara[columna], wPalo[fila],     // despliega la carta 
                        carta % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}