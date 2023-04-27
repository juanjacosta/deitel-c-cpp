#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int x;
    int y;
    int *const ptrX = &x;

    *ptrX = 7;
    ptrX = &y; // erro ao tratar de asignar um novo endereço
}
