#include <stdio.h>

union mi_union_t {
    int entero;
    float flotante;
};

int main()
{
    union mi_union_t u;
    u.entero = 123456789;
    u.flotante = 2.54E6;
    
    printf("entero = %d\n", u.entero);

    return 0;
}