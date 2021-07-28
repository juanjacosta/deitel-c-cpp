/*
    Programa: D4_ejm045_calculoInteresCompuesto.c
    Propósito: Una persona invierte $1000.00 en una cuenta de ahorros con un 5% de interes. Se
               asume que todo el interes se deja en deposito dentro de la cuenta; calcule y 
               despliegue el monto acumulado de la cuenta al final de cada ano, durante 10 anos.
               Utilice la siguiente formula para determinar esos montos:
                a = p (1 + r)^n
                donde 
                p   es el monto de la invrsion original (es decir, la inversin principal)
                r   es la tasa de interes anual
                n   es el numero de anos
                a   es el monto del deposito al final de cada ano n 

    NOTA: Para solucionar error de "referência não definida para "pow":
          Append -lm to the end of your gcc command 

           gcc -Wall arquivo.c -o arquivo -lm
             
    Fecha    : 28/08/2019
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double monto;                       // monto del deposito
    double principal = 1000.0;          // monto principal
    double tasa = .05;                  // interes compuesto anual 
    int anio;                           // contador de anos 

    printf("============================================\n");
    printf("\tInteres compuesto\n");
    printf("=============================================\n");

    printf("%4s%21s\n", "Anio", "Monto del deposito");  // Despliega el encabezado de la tabla

    for (anio = 1; anio <= 10 ; anio++){
        monto = principal * pow(1.0 + tasa, anio);      // calcula el nuevo monto para cada anio 

        printf("%4d%21.2f\n", anio, monto);
    }

    return 0;
}