/*
    La funcion signal recibe dos argumentos, un entero para el número de senal y un 
    apuntador a la funcion de manipulacion de senales. 

    Las senales pueden generarse por medio de la funcion raise, la cual toma como
    argumento un número entero como senal.
*/

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <time.h>

void manipulaSenal(int valorSenal);

int main()
{
    int i;                              //contador utilizado para un ciclo de 10 repeticiones 
    int x;                              //variable para almacenar valores aleatorios entre 1 y 50 

    signal(SIGINT, manipulaSenal);      //recibe 2 argumentos, un entero el numero de senal y 
                                        //un apuntador a la función de manipulación de senales 
    srand(clock());

    /* muestra los numeros de 1 a 100 */
    for (i = 1; i <= 100; i++){
        x = 1 + rand() % 50;            // Genera numeros aleatorios hasta alcanzar SIGINT 

        /* alcanza SIGINT cuando x es 25 */
        if (x == 25){
            raise(SIGINT);              //funcion que se usa para simular una senal interactiva
        }
        printf("%4d", i);

        /* muestra \n cuando i es un multiplo de 10 */
        if (i % 10 == 0){
            printf("\n");
        }
    }
    return 0;
}

void manipulaSenal(int valorSenal)
{
    int respuesta;                          //respuesta del usuario a la senal (1 o 2)

    printf("%s%d%s\n%s", 
        "\nSenal de interrupcion ( ", valorSenal,  ") recibida",
        "Desea continuar (1 = si o 2 = no)?: ");

        scanf("%d", &respuesta);

        /* verifica respuestas invalidas */
        while (respuesta != 1 && respuesta != 2){
            printf("(1 = si o 2 = no)?: ");
            scanf("%d", &respuesta);
        }

        /* determina si es tiempo de terminar */
        if (respuesta == 1){
            /* registra el manipulador de senales para el siguiente SIGINT */
            signal(SIGINT, manipulaSenal);
        }
        else {
            exit(EXIT_SUCCESS);
        }
}