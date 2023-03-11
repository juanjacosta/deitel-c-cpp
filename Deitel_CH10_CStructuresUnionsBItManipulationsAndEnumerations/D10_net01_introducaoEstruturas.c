#include <stdio.h>

int main()
{
    struct horario{         // defincición de la estructura
        int horas;
        int minutos;
        int segundos;
        float teste;
        char nome[10];
    };

    struct horario agora;   // Declaración de la estructura 

    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);        

    return 0;
}