#include <stdio.h>

int main()
{
    FILE *ptrArchivo;               //apuntador al archivo a modificar
    FILE *ptrArchivoTemp;           //apuntador al archivo temporal 
    int c;                          //c va a almacenar los caracteres leidos desde el archivo
    char nombreArchivo[30];         //crea un arreglo de caracteres

    printf("================================================================\n");
    printf("\tEste programa cambia tabuladores por espacios\n");
    printf("================================================================\n");

    printf("Introduzca un archivo a modificar: ");
    scanf("%29s", nombreArchivo);

    /* fopen abre el archivo */
    if ((ptrArchivo = fopen(nombreArchivo, "r+")) != NULL){

        /* crea un archivo temporal */
        if ((ptrArchivoTemp = tmpfile()) != NULL){
            printf("El archivo antes de la modificacion es:\n");

            /* Lee caracteres desde un archivo y los coloca en un archivo temporal */
            while ((c = getc(ptrArchivo)) != EOF){
                putchar(c);
                putc(c == '\t' ? ' ': c, ptrArchivoTemp);
            }
            rewind(ptrArchivoTemp);
            rewind(ptrArchivo);
            printf("\n\nEl archivo despues de la modificacion es:\n");

            /* lee desde un archivo temporal y escribe en el archivo original */
            while ((c = getc(ptrArchivoTemp)) != EOF){
                putchar(c);
                putc(c, ptrArchivo);
            }
        }
        else { /* si no se puede abrir el archivo temporal */
            printf("No se puede abrir el archivo temporal\n");
        }
    } 
    else { /* si no se puede abrir el archivo */
        printf("No se puede abrir el archivo %s\n", nombreArchivo);
    }

    return 0;
}