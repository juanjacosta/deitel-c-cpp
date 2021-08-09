/*
    Programa : D5_ejr5-16_funcionPotenciaInt.c
    Propósito: Escriba una función potenciaInt(base, exponente)
               que devuelva el valor de base^exponente
               Por ejemplo, potenciaInt(3, 4) = 3*3*3*3. Suponga 
               que exponente es un entero positivo diferente de 
               cero, y base es un entero. La función potenciaInt
               debe utilizar for para controlar los cálculos. No
               utilice las funciones ,atemáticas de la biblioteca.
*/

#include <stdio.h>

int potenciaInt(int base, int exponente);
int potenciaIntRecursiva(int base, int exponente);

int main()
{
    int base, exp, rec;

    printf("Base: ");
    scanf("%d", &base);

    printf("Exp : ");
    scanf("%d", &exp);

    rec = potenciaIntRecursiva(base, exp);

    printf("(Iterativa) %d^%d = %d\n", base, exp, potenciaInt(base, exp));
    // printf("(Recursiva) %d^%d = %d\n", base, exp, potenciaIntRecursiva(base, exp));
    printf("(Recursiva) %d^%d = %d\n", base, exp, rec);

    return 0;
}

int potenciaInt(int base, int exponente)
{
    int i, potencia = 1;

    if (exponente == 0){

        return 1;
    } 
    else {

        for (i = 1; i <= exponente; i++)
        {
            potencia *= base;
        }

        return potencia;    
    }
}

int potenciaIntRecursiva(int base, int exponente)
{
    if (exponente == 0){

        return 1;
    } 
    else {

        return base * potenciaIntRecursiva(base, --exponente);   
    }
}