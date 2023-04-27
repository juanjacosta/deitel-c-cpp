#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int x = 5;
    int y;
    const int *const ptrX = &x;

    *ptrX = 7;
    ptrX = &y;
}
