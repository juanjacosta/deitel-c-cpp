#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c[] = "teste de juan";
    char *cPtr = &c;

    printf("%s\n", c);

    while (*cPtr != '\0')
    {
        if (islower(*cPtr))
        {
            *cPtr = toupper(*cPtr);
        }
        cPtr++;
    }
    printf("%s\n", c);
}