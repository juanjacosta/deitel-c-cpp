/*
    La función exit fuerza la terminación exitosa de un programa, como si 
    se ejecutara normalmente.
    
    La función atexit registra una función que debe llamarse durante la 
    terminación exitosa de un programa, es decir, ya sea cuando el programa 
    termina al llegar al final de main, o cuando se invoca a exit. 

    La función atexit toma como argumento un apuntador a una función (es decir, 
    el nombre de la función).

    Las funciones llamadas durante la terminación del programa no pueden tener 
    argumentos y no pueden devolver valor alguno. Se pueden registrar hasta 32 
    funciones para su ejecución en el momento de la terminación del programa. 

    La función toma una constante simbolica como argumento, EXIT_SUCCESS o EXIT_FAILURE.

    Cuando se llama a exit con EXIT_SUCCESS, esta devuelve el valor definido por la 
    implementación para una teminación exitosa.

     Cuando se llama a exit con EXIT_FAILURE, esta devuelve el valor definido por la 
    implementación para una teminación no exitosa.

    Cuando se invoca a exit, se invoca primero a cualquier función que haya sido previamente 
    registrada con atexit, se cierran todos los flujos asociados con el programa y se regresa
    el control al ambiente anfitrión. 
*/

#include <stdio.h>
#include <stdlib.h>

void imprime(void);

int main()
{
    int respuesta;                      // elección del usuario

    atexit(imprime);                    // registra la nueva función imprime 
    printf("Introduzca 1 para terminar el programa con la funcion exit"
            "\nIntroduzca 2 para terminar el programa de manera normal\n");
    scanf("%d", &respuesta);

    /* llama a exit si la respuesta es 1 */
    if (respuesta == 1){
        printf("\nTermina el programa con la funcion exit\n");
        exit(EXIT_SUCCESS);
    }

    printf("\nTermina el programa al encontrar el final de main\n");

    return 0;
}       

void imprime(void)
{
    printf("Ejecuta la funcion imprime al finalizar el programa\n");
}