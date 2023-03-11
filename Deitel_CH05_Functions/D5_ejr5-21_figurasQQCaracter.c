/*
    Programa : D5_ejr5-21_figurasQQCaracter.c
    Propósito: Utilice técnicas similares a las empleadas en los ejercicios 5.19 e
               5.20 para producir un programa que grafique un número variado de 
               figuras.

               OBS: En el triángulo, el gráfico es de un triángulo isóceles (lados
                    iguales) teniendo en cuenta el espaciamento en la vertical.
*/

#include <stdio.h>

void drawSquare(void);
void drawRectangle(void);
void drawTriangle(void);
void drawCircle(void);

int main()
{
    int op;

    printf("======================================\n");
    printf("\tGrafico Figuras\n");
    printf("======================================\n");
    printf("1. Square\n2. Rectangle\n3. Triangle\n4. Circle\n");
    printf("Seleccione Figura: ");

    while ((scanf("%d", &op)) != EOF)
    {
        switch (op)
        {
        case 1:
            drawSquare();
            break;

        case 2:
            drawRectangle();
            break;

        case 3:
            drawTriangle();
            break;

        case 4:
            drawCircle();
            break;
        
        default:
            printf("Option not found\n\n");
            break;
        }

        printf("1. Square\n2. Rectangle\n3. Triangle\n4. Circle\n");
        printf("Seleccione Figura: ");
    }
    
    return 0;
}

void drawSquare(void)
{
    int side, i, j;
    char caracter;

    printf("\n### Square ###\n");
    printf("Side: ");
    scanf("%d", &side);

    printf("Character: ");
    scanf(" %c", &caracter);
    printf("\n");

    for (i = 1; i <= side; i++){

        for (j = 1; j <= side; j++)
        {
            printf("%c", caracter);
        }
        printf("\n");
    }
    printf("\n");
}

void drawRectangle(void)
{
    int base, height, i, j;
    char caracter;

    printf("### Rectangle ###\n");
    printf("Base: ");
    scanf("%d", &base);

    printf("Height: ");
    scanf("%d", &height);

    printf("Character: ");
    scanf(" %c", &caracter);
    printf("\n");

    for (i = 1; i <= height; i++){

        for (j = 1; j <= base; j++)
        {
            printf("%c", caracter);
        }
        printf("\n");
    }
    printf("\n");
}

void drawTriangle(void)
{
    int base, height, i, j, k;
    char caracter;

    printf("### Isosceles Triangle ###\n");
    printf("Base: ");
    scanf("%d", &base);

    printf("Height: ");
    scanf("%d", &height);

    printf("Character: ");
    scanf(" %c", &caracter);
    printf("\n");

    for (i = 1; i <= height; i++){

        // for (k = 1; k <= base / 2; k++)
        for (k = height; k >= i; k--)
        {
            printf(" ");            
        }
        
        for (j = 1; j <= i; j++)
        {
            printf("%c", caracter);

            if (j != 1){
                printf("%c", caracter);
            }
        }
        printf("\n");
    }
    printf("\n");
}

void drawCircle(void)
{
    int i, j, k, ratio;
    char caracter;

    printf("### Circle ###\n");

    printf("Ratio: ");
    scanf("%d", &ratio);

    printf("Character: ");
    scanf(" %c", &caracter);

    for (i = 1; i <= ratio; i++)
    {
        for (k = (ratio)-1; k >= i; k--)
        {
            printf(" ");
        }
        
        for (j = 3; j <= i+2; j+=1)
        {
            printf("%c", caracter);

            if (j != 1){
                printf("%c", caracter);
            }   
        }
        printf("\n");
    }

    for (i = 1; i <= ratio-1; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf(" ");
        }
        
        for (j = ratio-1; j >= i; j--)
        {
            printf("%c%c", caracter, caracter);

            if (j == 1){
                break;
            }   
        }

        printf("\n");
    }
}