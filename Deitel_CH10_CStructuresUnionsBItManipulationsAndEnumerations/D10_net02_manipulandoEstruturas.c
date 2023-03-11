#include <stdio.h>

int main()
{
    struct horario{         // defincición de la estructura
        int horas;
        int minutos;
        int segundos;
        float teste;
        char letra;
    };

    struct horario agora;   // Declaración de la estructura 

    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30; 

    struct horario depois;
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.segundos = agora.segundos / 5;
    depois.teste = 50.55 / 123;
    depois.letra = 'a';

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);        
    printf("%i:%i:%i\n", depois.horas, depois.minutos, depois.segundos); 
    printf("%f\n", depois.teste);
    printf("%c\n", depois.letra);
    
    return 0;
}