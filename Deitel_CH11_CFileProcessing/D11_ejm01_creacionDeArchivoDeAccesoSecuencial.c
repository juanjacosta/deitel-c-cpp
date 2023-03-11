#include <stdio.h>

int main()
{
    int cuenta;                 // numero de cuenta 
    char nombre[30];            // nombre de cuenta 
    double saldo;               // saldo de la cuenta 

    FILE *ptrCf;                // apuntador al archivo clientes.dat 

    printf("==========================================\n");
    printf("\tArchivos de acceso secuencial\n");
    printf("==========================================\n");

    /* fopen abre el archivo. Si no es capaz de crear el archivo, sale 
       del programa */
    if ((ptrCf = fopen("clientes.dat", "w")) == NULL){
        printf("El archivo no pudo abrirse\n");
    }
    else {
        printf("Introduzca la cuenta, el nombre y el saldo\n");
        printf("Introduzca EOF al final de la entrada\n");
        printf("? ");
        scanf("%d%s%lf", &cuenta, nombre, &saldo);

        /* escribe la cuenta, el nombre y el saldo dentro del archivo con fprintf */
        while (!feof(stdin)){
            fprintf(ptrCf, "%d %s %.2f\n", cuenta, nombre, saldo);
            printf("? ");
            scanf("%d%s%lf", &cuenta, nombre, &saldo);
        }
        fclose(ptrCf);
    }

    // printf("%d\n%s\n%.2lf\n", cuenta, nombre, saldo);

    return 0;
}