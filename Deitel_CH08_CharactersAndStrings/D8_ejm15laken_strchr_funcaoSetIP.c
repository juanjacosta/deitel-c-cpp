/*
    La función strchr busca la primera ocurrencia de un caracter
    en la cadena.

    Su prototipo es:

    char *strchr(const char *s, int c);

    Y localiza la primera ocurrencia del caracter c en la 
    cadena s. Si se localiza a c, se devuelve un apuntador 
    a c en s, de lo contrario se devuelve un apuntador NULL.  


*/

#include <stdio.h>
#include <string.h>

void setIP(const char *str);

int main()
{
    setIP("192.168.104.112");
    

    return 0;
}

void setIP(const char *str)
{
    char *ptr;
    ptr = strchr(str, '.');
    int p1, p2, p3;

    printf("Pontos nas seguintes posicoes:\n");
    while (ptr != NULL){
        printf("pos: %d\n", ptr-str+1);
        ptr = strchr(ptr+1, '.');
    }
}