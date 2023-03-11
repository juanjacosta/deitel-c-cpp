#include <stdio.h>

int main()
{
    int i;
    char teste[] = {'c', 'o', 'l', 'o', 'm', 'b', 'i', 'a'};

    for (i = 0; i < 8; i++){
        printf("%c", teste[i]);
    }
    printf("\n");

    return 0;
}