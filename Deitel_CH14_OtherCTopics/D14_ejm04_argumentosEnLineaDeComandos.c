/*
    Si se incluyen los prámetros int argc y char *argv[] en la lista de parámetros 
    de main se pueden pasar argumentos hacia main desde la línea de comandos. 
    
    - int argc, recibe el número de argumentos de la línea de comandos 
    - char *argv[], es un arreglo de cadenas en el que se almacenan los 
                    parámetros de la línea de comandos 

    Los usos más comunes de los argumentos en la línea de comandos incluye la impresión 
    de argumentos, el paso de opciones a un programa y el paso de nombres de archivo a 
    un programa. 

    El programa se ejecuta de la siguiente manera: 
    ./D14_ejm04_argumentosEnLineaDeComandos entrada.txt salida.txt
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *ptrEntArchivo;            // apuntador de archivo de entrada 
    FILE *ptrSalArchivo;            // apuntador de archivo de salida 
    int c;

    /* verifica el número de argumentos en la línea de comandos */
    if ( argc != 3){
        printf("Uso: copia archivoEnt archivoSal\n");
    } else {

        /* Si el archivo de entrada se puede abrir */
        if ((ptrEntArchivo = fopen(argv[1], "r")) != NULL){

            /* Si el archivo de salida se puede abrir */
            if ((ptrSalArchivo = fopen(argv[2], "w")) != NULL){

                /* Lee los caracteres y los arroja */
                while ((c = fgetc(ptrEntArchivo)) != EOF){
                    fputc(c, ptrSalArchivo);
                }

            } else { /* Si no se puede abrir el archivo de salida */
                printf("El archivo \"%s\" no se puede abrir\n", argv[2]);
            }
        } else { /* Si no se puede abrir el archivo de entrada */
            printf("El archivo \"%s\" no se puede abrir\n", argv[1]);
        }
    }

    return 0;
}