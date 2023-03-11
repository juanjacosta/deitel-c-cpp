#include <stdio.h>

struct horario{
    int h;
    int m;
    int s;
};

void funcionRecibe(struct horario hr[5]);
void funcionImprime(struct horario pr[5]);

int main()
{
    struct horario listaHorarios[5];

    funcionRecibe(listaHorarios);
    funcionImprime(listaHorarios);

    return 0;
}

void funcionRecibe(struct horario hr[5])
{
    for (int i = 0; i < 3; ++i){
        printf("Igrese %i horario (hh:mm:ss): ", i+1);
        scanf("%i:%i:%i", &hr[i].h, &hr[i].m, &hr[i].s);  
    }
}

void funcionImprime(struct horario hr[5])
{
    for (int i = 0; i < 3; ++i){
        printf("El %i horario es: %i:%i:%i\n", i+1, hr[i].h, hr[i].m, hr[i].s);
    }
}