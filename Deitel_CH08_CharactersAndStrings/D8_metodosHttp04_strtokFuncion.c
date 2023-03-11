#include <stdio.h>
#include <string.h>

char *metodoCatraca(char *url);

int main()
{
    char cadena[] = "http://example.com?product=1234&utm_source=google";
    char *metodoRetornado;

    strncpy(metodoRetornado, metodoCatraca(cadena));

    printf("%s", metodoRetornado);

    return 0;
}

char *metodoCatraca(char *url)
{
    char *ptrToken;
	char metodo[50];

	ptrToken = strtok(url, "?");

	while(ptrToken != NULL){
		sprintf(metodo, "%s\n", ptrToken);
		ptrToken = strtok(NULL, " ");
	}
    // printf("%s\n", metodo);
    return metodo;
}