#include <stdio.h>

void printSquare(int s, char c);

int main()
{
    int side;
    char character;

    printf("Side: ");
    scanf("%d", &side);

    printf("character: ");
    // scanf("%c", &character);
    character = getchar();

    printSquare(side, character);
    
    return 0;
}

void printSquare(int s, char c)
{
    int i, j;

    for (i = 1; i <= s; i++){

        for (j = 1; j <= s; j++){
            printf("%c", c);
        }
        printf("\n");
    }
}