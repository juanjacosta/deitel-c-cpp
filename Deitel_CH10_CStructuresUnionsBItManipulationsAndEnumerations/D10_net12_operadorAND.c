/* Programa : D10_net12_operadorAND.c
   Proposito: Mostrar el uso del operador de desplazamiento a 
              la izquierda con el operador AND para verificar 
              el numero de ceros de un valor en su representacion
              binaria. 
 */
#include <stdio.h>

int main()
{
    printf("=====================================================\n");
    printf("Operador AND y desplazamiento a la izquierda\n");
    printf("=====================================================\n");

    unsigned a = 0xa3b5;
    unsigned s = 0;

    for (int q = 0; q < 16; q++){
        if ((a & (0x01 << q)) == 0){
            s++;
        }
    }

    printf("s = %u\n", s);

    return 0;
}