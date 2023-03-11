/*  Programa : D3_ejr07_kilometrosPorLitroGasolina.c
    Ejercicio: Los conductores estan preocupados por el kilometraje obtenido en sus automoviles.
               Un conductor mantiene el registro de muchos llenados de tanque de gasolina 
               mediante el registro de miles de kilometros conducidos y los litros empleados
               durante cada llenado del tanque. El programa debe calcular y desplegar los 
               kilometros por litro obtenidos durante cada llendao de tanque. Despues de
               procesar toda la informacion, el programa debe calcular y desplegar los 
               kilometros por litro combinados de todos los llenados de tanque. 
                Ejercicio 3.17 Deitel - pg. 80
    Fecha    : 23/08/2019
 */


#include <stdio.h>

int main()
{
    float litros = 0;
    int km = 0;
    int contKmLitro = 0;
    float kmLitro, sumKmLitro, promKmLitro;

    printf("==========================================================\n");
    printf("\tLitros por kilometro\n");
    printf("==========================================================\n");

    printf("Introduzca los litros utilizados (-1 para terminar): ");
    scanf("%f", &litros);

    while (litros != -1){
        
        printf("Introduzca los kilometros conducidos: ");
        scanf("%d", &km);

        kmLitro = (float)km / litros;
        contKmLitro++;
        sumKmLitro += kmLitro;

        printf("Los kilometros por litro de este tanque fueron: %f\n\n", kmLitro);

        printf("Introduzca los litros utilizados (-1 para terminar): ");
        scanf("%f", &litros);
     
    }
    promKmLitro = sumKmLitro / contKmLitro;
    printf("\nEl promedio general de kilometros/litro fue: %f\n", promKmLitro);
    printf("==========================================================\n");

    return 0;
}