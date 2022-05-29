/*  
    En un arreglo llamado fracciones
    a) Declare una constante simbolica TAM para que sea reemplazada 
       con el texto de reemplazo 10
    b) Declare un arreglo con TAM elementos de tipo double, e inicialize
       los elementos en 0 
    c) Asigne un nombre al cuarto elemento del arreglo 
    R/ fracciones[3]
    d) Haga referencia al elemento 4 del arreglo 
    R/ fracciones[4]
    e) Asigne el valor 1.667 al elemento 9 del arreglo 
    f) Asigne el valor 3.333 al séptimo elemento del arreglo 
    g) Despliegue los elementos 6 y 9 del arreglo con dos digitos de  
       precisión a la derecha del punto decimal 
    h) Despliegue todos los elementos del arreglo mediante la instrucción  
       de repetición for. Suponga que una variable entera x ha sido definida
       como una variable de control para el ciclo. Muestre la salida 
*/

#include <stdio.h>
#define TAM 10

int main()
{
    int x;
    double fracciones[TAM] = {0};

    fracciones[9] = 1.667;
    fracciones[6] = 3.333;

    printf("fracciones[6] = %.2f\n", fracciones[6]);
    printf("fracciones[9] = %.2f\n", fracciones[9]);

    printf("\nElementos del arreglo\n");
    for (x = 0; x < TAM; x++){
        printf("fracciones[%d] = %f\n", x, fracciones[x]);
    }

    return 0;
}