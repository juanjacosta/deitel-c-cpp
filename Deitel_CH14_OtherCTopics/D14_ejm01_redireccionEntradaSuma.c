/* EJM PARA VERIFICAR EL VALOR DE EOF
#include <stdio.h>
int main() {
    int c;
    while((c = getchar()) != EOF) { //precedence of != is greater than =, so use braces
        printf("%d\n", c);
    }
    printf("%d - at EOF\n", c);


    ####### PARA PROBAR EL PROGRAMA #######

     ./D14_ejm01_suma < entrada.txt 

}
*/

#include <stdio.h>

int main()
{
    int num = 0, suma = 0;

    while ((scanf("%d", &num)) != EOF){
        // printf("%d\n", num);
        suma += num;
           
    }
    printf("%d\n", suma);
    return 0;
}

