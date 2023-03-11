/*
    ./D14_ejm02_canalizacionAleatorioSuma | ./D14_ejm01_redireccionEntradaSuma
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAM 10

int main()
{   
    srand(time(NULL));
    for (int i= 0; i < TAM; i++){
        printf("%d\n", 1 + rand() % TAM);
    }

    return 0;
}