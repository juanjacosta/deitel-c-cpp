/*
  Programa : D5_ejm08_reglasDeAlcance.c
  Proposito: Mostrar los diferentes tipos de alcance de variables en un programa. 
 */

#include <stdio.h>

void usoLocal(void);        // Prototios de Funciones 
void usoStaticLocal(void);
void usoGlobal(void);

int x = 1;                  // variable Global

int main()
{
  int x = 5;                // variable local en main  

  printf("==========================================================\n");
  printf("La x local dentro del alcance de main es   : %d\n", x);

  // Definición de bloque dentro de main para mostrar el alcance de bloque
  {
    int x = 7;              // comienza el nuevo alcance
    
    printf("La x local en el alcance del bloque interno de main es: %d\n", x);
  }                         // Termina el nuevo alcance
  
  printf("La x local en el alcance externo de main es: %d\n", x);

  printf("==========================================================\n");

  usoLocal();               // usoLocal contiene a x local
  usoStaticLocal();         // usoStaticLocal contiene una x local estática
  usoGlobal();              // usoGlobal utiliza una x global
  printf("==========================================================\n"); 
  usoLocal();               // usoLocal reinicializa la x local automática
  usoStaticLocal();         // usoStaticLocal retiene el valor previo de static local x
  usoGlobal();              // usoGlobal también retiene el valor previo de x

  printf("==========================================================\n");

  printf("La x local en main es: %d\n", x);

  printf("==========================================================\n"); 

  return 0;
}

// Definiciones de funciones 
void usoLocal(void)         // usoLocal reinicializa a la variable local x durante cada llamada
{
  int x = 25;
  
  printf("La x local al entrar a la funcion usoLocal es    : %d\n", x);
  x++;
  printf("La x local despues de salir de usoLocal es       : %d\n", x);
  printf("\n");
}

void usoStaticLocal(void) // usoEstaticLocal inicializa la variable static local x solo la primera
{                         // vez que se llama a la función. El valor de x se guarda entre las llamadas
  static int x = 50;
  
  printf("La x local estatica al entrar a usoStaticLocal es: %d\n", x);
  x++;
  printf("La x local estatica al salir de usoStaticLocal es: %d\n", x);
  printf("\n");
}

void usoGlobal(void)      // usoGlobal modifica la variable local x durante cada llamada
{
  printf("La variable global x al entrar a usoGlobal es    : %d\n", x);
  x *= 10;
  printf("La variable global x al salir de usoGlobal es    : %d\n", x);
}
