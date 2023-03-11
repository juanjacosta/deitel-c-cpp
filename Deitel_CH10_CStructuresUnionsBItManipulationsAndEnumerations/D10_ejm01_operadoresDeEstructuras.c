#include <stdio.h>

struct carta {
    char *cara;
    char *palo;
};

int main()
{
    struct carta unaCarta;
    struct carta *ptrCarta;

    // coloca cadenas dentro de unaCarta
    unaCarta.cara = "As";
    unaCarta.palo = "Espadas";

    ptrCarta = &unaCarta;

    printf("%s de %s\n", unaCarta.cara, unaCarta.palo);
    printf("%s de %s\n", ptrCarta->cara, ptrCarta->palo);
    printf("%s de %s\n", (*ptrCarta).cara, (*ptrCarta).palo);

    return 0;
}