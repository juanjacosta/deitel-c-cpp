/*
    Programa : D4_ejr4-15_interesCompuesto.c
    Proposito: Modificar el programa de interés compuesto de la sección 4.6
               para repetir sus pasos para tasas de interés del 5 %, 6 %, 8 %,
               9 % y 10 %. Utilice for para crear un ciclo que varíe la tasa 
               de interés. 

                a = p (1 + r)^n

                donde 
                p   es el monto de la invrsion original (es decir, la inversin principal)
                r   es la tasa de interes anual
                n   es el numero de anos
                a   es el monto del deposito al final de cada ano n 

                Programa sección 4.6:

                Una persona invierte $1000.00 en una cuenta de ahorros con un 5% de interes. Se
                asume que todo el interes se deja en deposito dentro de la cuenta; calcule y 
                despliegue el monto acumulado de la cuenta al final de cada ano, durante 10 anos.
                Utilice la siguiente formula para determinar esos montos:

                NOTA: Para solucionar error de "referência não definida para "pow":
                
                Append -lm to the end of your gcc command 

                gcc -Wall arquivo.c -o arquivo -lm
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float p = 1000.00;  // capital inicial
    int r = 5;          // interes anual
    int n = 10;         // numero de anos
    float a = 0;        // monto del deposito al final de ano

    for (r; r <=10; r++){

        if (r == 7)
            continue;

        printf("================================================\n");
        printf("\tCalculo interés compuesto tasa %d%\n", r);
        printf("================================================\n");


        for (int i = 1; i <= n; i++){

            a = p * pow(1+((float)r/100), i);
            printf("Monto acumulado anio %d = %.2f\n", i, a);
        }

        printf("\n");

    }

    return 0;
}