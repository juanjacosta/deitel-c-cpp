#include <stdio.h>

int main()
{
    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    // struct horario teste[5];

    // teste[0].hora = 10;
    // teste[0].minuto = 20;
    // teste[0].segundo = 30;

    // printf("%i:%i:%i\n", teste[0].hora, teste[0].minuto, teste[0].segundo);

    struct horario teste[5] = 
    {{10, 20, 30}, {20, 30, 40}, {30, 40, 50},
    {40, 50, 60}, {50, 60, 70}};

    int i;
    for (i = 0; i < 5; i++){
        printf("%i:%i:%i\n", teste[i].hora, teste[i].minuto, teste[i].segundo);
    }
    return 0;
}