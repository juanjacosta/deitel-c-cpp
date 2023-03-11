/*
 Programa : Ejm_06_crapsMuGoL.c
 Proposito: Escribir un programa que simule el juego "craps". En este juego cada jugador tira 
            2 dados y cada dado tiene 6 caras con valores entre 1 y 6. Una vez que los dados 
            caen se calcula la suma de los puntos de las caras que miran hacia arriba. 
            - Si la suma es igual a 7 u 11 en el primer tiro, el jugador gana. 
            - Si la suma es 2, 3 o 12 en el primer tiro la casa gana y el jugador pierde, 
              (esto se llama "craps")
            - Si la suma es 4, 5, 6, 8, 9 o 10 en el primer tiro, entonces la suma es el punto 
              del jugador. 
            * Para ganar se debe continuar tirando hasta que el usuario del juego haga su punto. 
            - El jugador pierde si tira un 7 antes de hacer su punto.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tiraDados(void);

int main()
{
    int punto, suma;
    int statusJuego;        // 1 Gana - 2 Pierde - 3 continua

    srand(time(NULL));

    suma = tiraDados();

    if(suma == 7 || suma == 11){
        printf("Jugador gana\n");
        statusJuego = 1;    // GANA        
    }
    
    else if(suma == 2 || suma == 3 || suma == 12){
        printf("Craps - La casa gana!\n");
        statusJuego = 2;    // PIERDE
    }

    else {                  // CONTINUA
        punto = suma;
        printf("Puntos: %d\n", punto);
        statusJuego = 3;
    }

    while (statusJuego == 3)    // Mientras no se complete el juego
    {
        suma = tiraDados();

        if (suma == punto){
            statusJuego = 1;    // GANA, fin del juego
        } 
        else if(suma == 7){
            statusJuego = 2;    // PIERDE, termina el juego
        }
    }

    // Despliega resultados

    if (statusJuego == 1){
        printf("El jugador gana\n");
    }
    else {
        printf("El jugador pierde\n");
    }

    return 0;
}

int tiraDados(void)
{
    int d1, d2, sumaTemp;

    d1 = 1 + (rand() % 6);
    d2 = 1 + (rand() % 6);

    sumaTemp = d1 + d2;

    printf("El jugador tiro %d + %d = %d\n", d1, d2, sumaTemp);

    return sumaTemp;
}