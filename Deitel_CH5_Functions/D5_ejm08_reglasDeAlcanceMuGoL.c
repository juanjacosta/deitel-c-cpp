#include <stdio.h>

int x = 1;

void usoLocal(void);
void usoStaticLocal(void);
void usoGlobal(void);

int main()
{
    int x = 5;

    printf("============================================================\n");
    printf("\t\tReglas de Alcance\n");
    printf("============================================================\n");

    printf("La x local definida en main es: %d\n", x);

    {
        int x = 7;
        printf("La x en el bloque interno de main es: %d\n", x);
    }

    printf("La x local definida en main es: %d\n\n", x);

    usoLocal();
    usoStaticLocal();
    usoGlobal();

    usoLocal();
    usoStaticLocal();
    usoGlobal();

    printf("La x local en main no se modifico, su valor es: %d\n", x);
    printf("============================================================\n");
    
    return 0;
}

void usoLocal(void)
{
    int x = 25;
    printf("La x en usoLocal es %d despues de entrar a usoLocal\n", x);
    x++;
    printf("La x en usoLocal es %d antes de salir de usoLocal\n\n", x);
}

void usoStaticLocal(void)
{
    static x = 50;
    printf("La x en usoStaticLocal es %d al entrar a usoStaticLocal\n", x);
    x++;
    printf("La x en usoStaticLocal es %d al salir de usoStaticLocal\n\n", x);
}

void usoGlobal(void)
{
    printf("La x global es %d al entrar a usoGlobal\n", x);
    x *= 10;
    printf("La x global es %d al salir de usoGlobal\n\n", x);
}