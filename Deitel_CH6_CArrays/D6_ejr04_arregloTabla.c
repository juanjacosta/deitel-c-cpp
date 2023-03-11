/*
    a) Declare tabla para que sea un arreglo entero y que tenga 3 filas y 
       3 columnas. Suponga que la constante simbolica TAM se declaró para 
       que fuera 3.
    b) Cuántos elementos contiene el arreglo tabla? Imprima el número total
       de elementos.
    R/ 9 elementos 
    c) Utilice una instrucción de repetición for para inicializar cada elemento 
       de tabla con la suma de sus subíndices. Suponga que las variables enteras 
       x e y se definieron como variables de control. 
    d) Imprima los valores de cada elemento del arreglo tabla. Suponga que el 
       arreglo se inicializó con la declaración: 

       int tabla[TAM][TAM] = {{1, 8}, {2, 4, 6}, {5}};
*/

#include <stdio.h>
#define TAM 3 

void imprimeArreglo(const int a[][TAM]);
void inicializaArreglo(int a[][TAM]);
// void inicializacionDefinida(int a[][TAM]);   //JJ Verificar error
void inicializacionDefinida(void);

int main()
{
    int tabla[TAM][TAM] = {0};

    imprimeArreglo(tabla);
    printf("\n");
    inicializaArreglo(tabla);
    printf("\n");
    imprimeArreglo(tabla);
    printf("\n");
    inicializacionDefinida();
    
    return 0;
}

void imprimeArreglo(const int a[][TAM])
{
    int i, j;

    for (i = 0; i < TAM; i++){
        for (j= 0; j < TAM; j++){
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
}

void inicializaArreglo(int a[][TAM])
{
    int x, y;

    for (x = 0; x < TAM; x++){
        for (y = 0; y < TAM; y++){
            a[x][y] += x + y;
        }
    }
}

// void inicializacionDefinida(int a[][TAM]); 
void inicializacionDefinida(void)
{
    int a[TAM][TAM] = {{1, 8}, {2, 4, 6}, {5}};  //JJ verificar error

    for (int x = 0; x < TAM ; x++){
        for (int y = 0; y < TAM; y++){
            printf("tabla[%d][%d] = %d\n", x, y, a[x][y]);
        }
    }
}