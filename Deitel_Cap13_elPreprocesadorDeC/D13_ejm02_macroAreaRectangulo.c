#include <stdio.h>

#define AREA_RECTANGULO(x, y)   ((x) * (y))

int main()
{
    double areaRect;
    float a;
    float l;

    printf("==============================\n");
    printf("\tMACRO AREA RECTANGULO\n");
    printf("==============================\n");

    printf("Ingrese dimensiones\n");;
    printf("Alto : "); scanf("%f", &a);
    printf("largo: "); scanf("%f", &l);

    // areaRect = AREA_RECTANGULO(4, 7);
    areaRect = AREA_RECTANGULO(a, l);

    printf("lados: %.2f, %.2f\n\n", a, l);
    printf("Area Rectangulo: %.2f\n\n", areaRect);

    return 0;
}