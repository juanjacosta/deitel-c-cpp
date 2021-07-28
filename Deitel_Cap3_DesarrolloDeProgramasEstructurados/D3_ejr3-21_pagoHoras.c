/*
    Programa : D3_ejr3-21_pagoHoras.c
    Proposito: Desarrolle un programa que determine el pago bruto 
               de cada uno de los empleados. Esta empresa paga 
               "horas completas" por las primeras 40 horas trabajadas
               por cada empleado e paga "hora y media" por todas
               las horas extras trabajadas despues de las 40. Usted
               tiene una lista de los empleados de la empresa, el 
               número de horas que trabajó cada empleado la semana 
               pasada y el pago por hora de cada empleado. Su programa
               deberá introducir esta información para cada empleado,
               y deberá determinar y desplegar el pago bruto por 
               empleado.  
*/

#include <stdio.h>

int main()
{
    printf("===========================================\n");
    printf("\tPago Horas trabajadas\n");
    printf("===========================================\n");

    int nHoras, horasExtra;
    float pHora, pHoraExtra, salario = 0;
    
    printf("Introduzca el No. de horas laboradas (-1 para terminar): ");
    scanf("%d", &nHoras);

    while (nHoras != -1)
    {
        printf("Introduzca el pago por hora del empleado: ");
        scanf("%f", &pHora);

        if (nHoras <= 40){
            salario = pHora * nHoras;
        } 
        else {
            horasExtra = (nHoras - 40);
            pHoraExtra = pHora * horasExtra * 1.5;
            salario = (pHora  * (nHoras-horasExtra)) + pHoraExtra;
            
        } 
        printf("Horas extra: %d\n", horasExtra);
        printf("El salario es: %.2f\n\n", salario);

        printf("Introduzca el No. de horas laboradas (-1 para terminar): ");
        scanf("%d", &nHoras);
    }
    return 0;
}