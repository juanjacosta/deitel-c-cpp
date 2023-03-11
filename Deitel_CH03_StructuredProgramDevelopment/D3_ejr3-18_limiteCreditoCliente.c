/*
    Programa : D3_ejr3-18_limiteCreditoCliente.c 
    Propósito: Desarrolle un programa en C que determine si un cliente de una tienda 
               departamental excede el límite de crédito de su cuenta. Para cada 
               cliente, se dispone de los siguientes datos: 
               1. Numero de cuenta 
               2. Saldo al inicio del mes
               3. Total de elementos cargados al cliente en este mes 
               4. El total de los créditos aplicados a la cuenta del cliente durante el mes 
               5. El límite de crédito autorizado

               El programa debe introducir cada uno de estos datos, calcular el nuevo saldo
               (= saldo inicial + cargos - creditos), y determinar si el nuevo saldo excede 
               el límite de crédito del cliente. Para aquellos clientes que excedan el límite 
               de crédito, el programa debe desplegar el número de cuenta, el límite de crédito, 
               el nuevo saldo y el mensaje "Limite de credito excedido".

               Algoritmo del programa 
               CIMA:
               Determinar si un cliente de una tienda departamental excede el límite de crédito 
               de su cuenta.

               MEJORAMIENTO:
               Inicializar variables 

               Introducir datos de cliente: # de cuenta, Saldo al inicio del mes, Total de elementos 
               cargados al cliente en este mes, total de los créditos aplicados a la cuenta del cliente 
               durante el mes, límite de crédito autorizado. 

               Calcular nuevo saldo y determinar si este excede o no el límite de credito del cliente.

               Si el limite de credito fue excedido 
                    imprimir número de cuenta del cliente, límite de crédito, nuevo saldo y el mensaje 
                    "Limite de credito excedido"
                Si no
                    No imprimir nada y solicitar los datos de otra cuenta 

    Fecha     : 02/07/2020
*/

#include <stdio.h>

int main()
{
    int cuenta;
    float saldoI, saldoF, cargos, creditos, limiteCredito;

    cuenta = saldoI = cargos = creditos = limiteCredito = 0;

    printf("============================================================================\n");
    printf("\tPrograma Limite de credito\n");
    printf("============================================================================\n");

    printf("Introduzca el numero de cuenta (-1 para terminar): ");scanf("%d", &cuenta);
    while (cuenta != -1)
    {
        printf("Introduzca el saldo inicial: ");scanf("%f", &saldoI);
        printf("Introduzca el total de cargos: ");scanf("%f", &cargos);
        printf("Introduzca el total de creditos: ");scanf("%f", &creditos);
        printf("Introduzca el limite de credito: ");scanf("%f", &limiteCredito);

        saldoF = saldoI + cargos - creditos;


        if (saldoF > limiteCredito)
        {
            printf("Cuenta: %d\n", cuenta);
            printf("Limite de credito: %.2f\n", limiteCredito);
            printf("Saldo: %.2f\n", saldoF);
            printf("Limite de credito excedido\n");
        }
        printf("\nIntroduzca el numero de cuenta (-1 para terminar): ");scanf("%d", &cuenta);
    }

    printf("============================================================================\n");
    return 0;
}