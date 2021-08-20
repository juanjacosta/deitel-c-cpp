#include <stdio.h>

#define PI 3.141599
#define AREA_CIRCULO(x) ((PI) * (x) * (x))

int main()
{
    float area;

    printf("==============================\n");
    printf("\tMACRO AREA CIRCULO\n");
    printf("==============================\n");

    area = AREA_CIRCULO(4.5);

    printf("Area Circulo: %f\n\n", area);

    return 0;
}