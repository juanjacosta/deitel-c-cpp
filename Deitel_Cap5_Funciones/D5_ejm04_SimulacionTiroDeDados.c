/*
 Programa : D5_Ejm_04_SimulacionTiroDeDados.c
 Proposito: Escribir un programa que simule 6000 tiros de un dado de 6 lados. Despliegue en una tabla la 
            frecuencia de ocurrencia de cada lado.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fq1 = 0;  // contador cuando cae 1
    int fq2 = 0;  // contador cuando cae 2
    int fq3 = 0;  // contador cuando cae 3
    int fq4 = 0;  // contador cuando cae 4
    int fq5 = 0;  // contador cuando cae 5
    int fq6 = 0;  // contador cuando cae 6
  
  int tiro;       // contador de tiros, valores de 1 a 6000
  int cara;   // representa un tiro del dado, valores de 1 a 6

  printf("=======================================\n");
  printf("\tSimulacion tiro de dados\n");
  printf("========================================\n");

  for(tiro = 1; tiro <= 6000; tiro++)
  {
    cara = 1 + (rand() % 6);      // número aleatorio de 1 a 6

    switch(cara)
    {
      case 1:     // tiro cae en 1                      
        ++fq1;
        break;

      case 2:     // tiro cae en 2 
        ++fq2;
        break;

      case 3:     // tiro cae en 3
        ++fq3;
        break;

      case 4:     // tiro cae en 4
        ++fq4;
        break;

      case 5:     // tiro cae en 5
        ++fq5;
        break;

      case 6:     // tiro cae en 6
        ++fq6;
        break;
    } 
  }

  // Despliega los resultados en forma tabular

  printf("%10s%30s\n", "Cara", "Frecuencia");
  printf("========================================\n");
  
  printf("\t1%15d\n",fq1);  
  printf("\t2%15d\n",fq2); 
  printf("\t3%15d\n",fq3); 
  printf("\t4%15d\n",fq4); 
  printf("\t5%15d\n",fq5); 
  printf("\t6%15d\n",fq6); 
  printf("========================================\n");

  return 0;
}
