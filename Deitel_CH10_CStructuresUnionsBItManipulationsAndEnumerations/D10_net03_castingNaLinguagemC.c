#include <stdio.h>

int main()
{
    int x = 16;
    int y = 3;

    float resultado = (float) x / y;
    char res = (char) x / y;

    printf("%f\n", resultado);
    printf("%c\n", res);

    return 0;
}