/*
 Programa : Ejm_06_crapsUnJuegoDeAzar.c
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

enum Estatus {CONTINUA, GANA, PIERDE};

int tiraDados(void);      // Prototipo de la función

int main()
{
  int suma;               // Suma del tiro de dados         
  int miPunto;            // Punto Ganado
 
  enum Estatus estatusJuego;    // puede contener CONTINUA, GANA o PIERDE

  srand(time(NULL));      // Randomiza el generador de números aleatorios mediante la funcion time 
   
  suma = tiraDados();     // Primer tiro de los dados

  switch(suma)            // Determina el estado del juego basado en la suma de los dados
  {
    case 7:
    case 11:
      estatusJuego = GANA;
      break;

    case 2:
    case 3:
    case 12:
      estatusJuego = PIERDE;
      break;

    default:
      estatusJuego = CONTINUA;
      miPunto = suma;
      printf("Su punto es : %d\n", miPunto);
      break;
  }

  while(estatusJuego == CONTINUA)   // Mientras el juego no se complete
  {
    suma = tiraDados();             // Tira de nuevo los dados

    if(suma == miPunto)             // Determina el estado del juego
    {
       estatusJuego = GANA;         // Gana por punto
    }
    else
    {
      if(suma == 7)
      {
        estatusJuego = PIERDE;
      }
    }
  }

  if(estatusJuego == GANA)           // Despliega el mensaje de resultados
  {
    printf("El jugador gana!!!\n");
  }
  else
  {
    printf("El jugador pierde!!!\n"); 
  }
  
  return 0;
}

int tiraDados(void)
{
  int dado1, dado2, sumaTemp;

  dado1 = 1 + (rand() % 6);
  dado2 = 1 + (rand() % 6);

  sumaTemp = dado1 + dado2;
  
  printf("El jugador tiro %d + %d = %d\n", dado1, dado2, sumaTemp);

  return sumaTemp;
}
