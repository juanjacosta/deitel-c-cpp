#include <stdio.h>

enum diasemana{LUNES = 1, MARTES, MIERCOLES, JUEVES, 
                VIERNES, SABADO, DOMINGO};

typedef enum{
    G1 = 1,
    G2 = 3,
    IO1 = 7,
    IO2 = 5
}puertosPLC;

int main()
{
    enum diasemana dia;
    puertosPLC puertos;

    // dia = VIERNES;
    // printf("%d\n", dia);

    for (puertos = 0; puertos < 8; puertos++){
        switch (puertos)
        {
        // case 1:
        case G1:
            printf("Puerto G1\n");
            break;
        case 2:
            printf("Puerto no asignado\n");
            break;
        case 3:
            printf("Puerto G2\n");
            break;
        case 5:
            printf("Puerto IO2\n");
            break;
        case 7:
            printf("Puerto IO1\n");
        break;
        
        default:
            printf("caso default\n");
            break;
        }
    }

    return 0;    
}
