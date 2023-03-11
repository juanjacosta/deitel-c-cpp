/*
    La instrucción goto, realiza un salto condicional y utilizarlo se considera una técnica de 
    programación no estructurada pues realiza un cambio en el flujo de control del programa.

    la instrucción goto se utiliza junto con etiquetas (identificador seguido por 2 puntos) para 
    definir los puntos a donde va a saltar el flujo de control del programa dependiendo de 
    condifiones definidas.

    En el ejemplo se utiliza una variable entera contador a la que se incrementar su valor y luego
    se imprime. Se utilizan dos instrucciones goto para evitar un ciclo infinito teniendo en cuenta
    la condición de si el valor de cuenta es mayor que 10. Si es así, el control se transfiere 
    desde goto a la primera instrucción después de la etiqueta fin, pero mientras el valor de 
    cuenta no sea mayor que 10 se imprime y se incermenta el valor de cuenta.  
*/

#include <stdio.h>

int main()
{
    int cuenta = 1;

    inicio:                     //etiqueta 

        if (cuenta > 10){
            goto fin;
        }

        printf("%d ", cuenta);
        cuenta++;

        goto inicio;            //ve a (goto) inicio en la linea 9

    fin:                        //etiqueta 
        putchar('\n');

    return 0;
}