/*  Programa : D3_ejer02_tareas3-3.c
    Proposito: Escribir una instruccion sencilla en C para 
               llevar a cabo c/u de las siguientes tareas
            a) Asigne la suma de x e y a z, incremente el
               valor de x en 1 despues del calculo
            b) Multiplique la variable producto por 2 mediante
               el uso de operadores = y *
            c) Verifique si el valor de la variable cuenta es mayor 
               10. Si lo es imprima "Cuenta es mayor que 10"
            d) Verifique si el valor de la variable cuenta es mayor que 10.
               Si lo es, imprima "Cuenta es mayor que 10"
            e) Decremente la variable x en 1, después réstela de la variable total
               total -= --x;

            f) Sume la variable x a total, después decremente x en 1
               totla += x--;

            h) Imprima el valor 123.4567 con dos dígitos de precisión. Qué valor imprime?
            i) Imprima el valor de punto flotante 3.14159 con tres digitos de precisión a 
               la derecha del punto decimal. Qué valor se imorime?

            Ejercicio 3.3 - Deitel - pg. 76
    Fecha    : 20/08/2019
 */
#include <stdio.h>

int main()
{   
    int x = 4, y = 2, z = 0;
    int producto = 1;
    int cuenta;

    
    printf("a) Suma e incremento\n");
   //  z = x + y;
   //  x++;
   z = x++ + y;
   printf("x + y = %d\n", z);
   printf("x = %d\n", x);

    printf("b) Multiplique la variable producto por 2\n");
   //  printf("Ingrese el valor de producto: ");
   //  scanf("%d", &producto);
    producto *= 2;
    printf("Producto = %d\n", producto);
    
    printf("c) Verifique si el valor cuenta es mayor 10\n");
    printf("Ingrese el valor de cuenta: ");
    scanf("%d", &cuenta);

    if (cuenta > 10)
      printf("Cuenta es mayor que 10\n");
     else
      printf("Cuenta es menor que 10\n");

   printf("h) Imprima el valor 123.4567 con dos dígitos de precisión. Que valor imprime?\n");
   printf("%.2f\n", 123.4567);

   printf("i) Imprima el valor de punto flotante 3.14159 con tres digitos de precisión . Que valor imprime?\n");
   printf("%.3f\n", 3.14159);

    return 0;
}