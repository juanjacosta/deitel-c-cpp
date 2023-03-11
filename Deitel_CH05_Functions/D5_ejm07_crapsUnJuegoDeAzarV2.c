/*
 Programa : Ejm_07_unJuegoDeAzar_craps.c
 Proposito: Escribir un programa que simule el juego "craps". En este juego cada jugador tira 
            2 dados y cada dado tiene 6 caras con valores entre 1 y 6. Una vez que los dados 
            caen se calcula la suma de los puntos de las caras que miran hacia arriba. Si la 
            suma es igual a 7 u 11 en el primer tiro, el jugador gana. Si la suma es 2, 3 o 12
            en el primer tiro la casa gana y el jugador pierde, (esto se llama "craps"), pero 
            si la suma es 4, 5, 6, 8, 9 o 10 en el primer tiro, entonces la suma es el punto 
            del jugador. Para ganar se debe continuar tirando hasta que el usuario del juego
            haga su punto. El jugador pierde si tira un 7 antes de hacer su punto.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int funcionTiraDados(void);

int main()
{
  int suma, puntos;
  int estadoJuego = 0;

  printf("=========================================\n");
  printf("\tBievenido a Craps!!!\n");
  printf("=========================================\n");

  srand(time(NULL));             // Randomiza el generador de números aleatorios mediante la funcion time
  suma = funcionTiraDados();     // Primer tiro de los dados

  switch(suma)  
  {
      case 7:
      case 11:
        estadoJuego = 1;
        break;

      case 2:
      case 3: 
      case 12:
        estadoJuego = 0;
        break;

      default:
        estadoJuego = 2;
        puntos = suma;
        printf("Puntos: %d\n", puntos); 
        break;
  }

  while(estadoJuego == 2)           // Mientras el juego no se complete
  {
    suma = funcionTiraDados();      // Tira de nuevo los dados 
    if(suma == puntos)             // Determina el estado del juego  
    {
      estadoJuego = 1;
    }
    else if(suma == 7)
    {
      estadoJuego = 0;
    }
  }

  if(estadoJuego == 1)
  {
     printf("El jugador gana!!!\n"); 
  }
  else
  {
     printf("El jugador pierde!!!\n"); 
  }
  printf("=========================================\n");

  return 0;
}

int funcionTiraDados(void)
{
  int dado1, dado2, sumaTemp;

  dado1 = 1 + (rand() % 6);
  dado2 = 1 + (rand() % 6);

  sumaTemp = dado1 + dado2;
  
  printf("El jugador tiro %d + %d = %d\n", dado1, dado2, sumaTemp);

  return sumaTemp;
}
