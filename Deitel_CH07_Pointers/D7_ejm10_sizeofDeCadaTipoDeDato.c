/*
    El operador sizeof es el operador más común en C. Es un operador unario
    en tiempo de compilación (ou seja que NO implica sobrecarga alguna en
    tiempo de ejecución) y se usa para calcular el tamanho en memoria de su
    operando, es decir, sizeof devuelve la cantidad de memoria asignada por
    el sistema a su operando.

    El operador sizeof se puede aplicar a cualquier tipo de dato, nombre
    de variable o expresión.

    El número de BYTES que se utilizan para almacenar un tipo de dato en
    particular puede variar entre sistemas.

    Se utiliza paréntesis, sizeof(), si se pasa un TIPO de dato como operando.
    Si se proporciona un nombre de variable no se requieren paréntesis.

    Programa : D7_ejm10_sizeofDeCadaTipoDeDato.c
    Propósito: Calcular el numero de bytes que se utilizan para almacenar cada
   uno de los tipos de datos estandares. Los resultados pueden variar entre
               computadoras.

               Ejm Deitel - Cap 7 - Ejm 7.17

 */
#include <stdio.h>

int main ()
{
  printf ("Sizeof Data Types\n");
  char c;
  short s;
  int i;
  long l;
  long long ll;
  float f;
  double d;
  long double ld;
  int array[20];    // crea arreglo de 20 elementos int
  int *ptr = array; // crea apuntador al arreglo

  printf ("    sizeof c = %d\tsizeof(char)  = %u\n "
          "   sizeof s = %d\tsizeof(short) = %u\n"
          "    sizeof i = %d\tsizeof(int)   = %u\n"
          "    sizeof l = %d\tsizeof(long)  = %u\n"
          "    sizeof ll = %d\tsizeof(long long)  = %u\n"
          "    sizeof f = %d\tsizeof(float) = %u\n"
          "    sizeof d = %d\tsizeof(double) = %u\n"
          "    sizeof ld = %d\tsizeof(long double) = %u\n"
          "    sizeof int array[20] = %d\n"
          "    sizeof ptr array[20]= %d\n",
          sizeof c, sizeof (char), sizeof s, sizeof (short), sizeof i,
          sizeof (int), sizeof l, sizeof (long), sizeof ll, sizeof (long long),
          sizeof f, sizeof (float), sizeof d, sizeof (double), sizeof ld,
          sizeof (long double), sizeof array, sizeof ptr);

  return 0;
}