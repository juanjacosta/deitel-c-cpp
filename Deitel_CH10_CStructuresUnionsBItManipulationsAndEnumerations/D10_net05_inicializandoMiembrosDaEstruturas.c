#include <stdio.h>

int main()
{
    struct horario{
        int horas;
        int minutos;
        int segundos;
    };                                // EXISTEN DIFERENTES FORMAS DE DAR VALORES A LOS MIEMBROS DE UNA ESTRUCTURA
    // } agora = {10, 20, 30};       // En este caso los valores van a ser inicializados siguiendo el orden entre llaves
    // } agora = {10};               // En este caso solo el 1er miembro va a ser inicializado en 10, los demas en 0

    // struct horario agora = {10, 20};
    struct horario agora = {.segundos = 10, .minutos = 20};

    // agora.horas = 10;
    // agora.minutos = 20;
    // agora.segundos = 30;

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

    return 0;
}