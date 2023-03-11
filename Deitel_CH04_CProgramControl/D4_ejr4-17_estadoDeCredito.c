/*
    Programa : D4_ejr4-17_estadoDeCredito.c
    Proposito: Recuperar el dinero se hace más difícil durante los periodos 
               de recesión, de manera que las empresas deben reducir sus 
               límites de crédito para prevenir que sus cuentas por cobrar
               (el dinero prestado) se hagan muy grandes. En respuesta a la 
               prolongada recesión, una empresa recortó sus límites de crédito
               a la mitad. De esta manera, si un cliente en particular tenía 
               un límite de crédito de $2000, ahora su límite de crédito es de
               $2500. Escriba un programa que analice el estado de crédito de
               tres clientes de esta empresa. Por cada cliente a usted se le 
               brinda:
               a) El número de cuenta del cliente.
               b) El límite de crédito antes de la recesión.
               c) El saldo actual del cliente (es decir, el monto que le debe 
                  el cliente a la empresa)
               Su programa debe calcular e imprimir el nuevo límite de crédito
               para cada cliente, y debe determinar (e imprimir) cuáles clientes
               tienen saldos que exceden los nuevos límites de crédito. 
*/

#include <stdio.h>

int main()
{
    int numCuenta;
    float creditoAnterior, creditoActual, saldoActual;

    printf("Numero de cuenta: ");
    scanf("%d", &numCuenta);

    printf("Limite de credito anterior: ");
    scanf("%f", &creditoAnterior);

    printf("Saldo actual: ");
    scanf("%f", &saldoActual);

    printf("\n");

    creditoActual = creditoAnterior / 2;

    printf("Nuevo limite de credito: %.2f\n", creditoActual);

    if (saldoActual > creditoActual){
        printf("El saldo excede nuevo limite de credito\n");
    }

    return 0;
}