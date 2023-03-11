/*
  Esta función pertenece a las FUNCIONES DE BUSQUEDA de la 
  biblioteca de manipulación de cadenas 

  const char *strstr(const char *s1, const char *s2);

        char *strstr(const char *s1, const char *s2);

        char *strstr(      char *s1, const char *s2);

  Localiza la primera ocurrencia en la cadena s1 de la cadena s2.
  Si se localiza la cadena, se devuelve un apuntador a la cadena 
  en s1. De lo contrario se devuelve un apuntador NULL.

  Los terminadores '\0' no son comparados
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char *ReqBuffer = "HTTP/ http://192.168.0.201/metodos/configuraLiberacao?sentidoHorarioLiberado=N&sentidoAntiHorarioLiberado=N";
    char *pStringI;
    char *pStringF;
    unsigned short StringPos = 0;

    /* Verifica tamanho total da string de interese */
    pStringI = &ReqBuffer[StringPos];
    pStringF = strstr((const char *) &ReqBuffer[StringPos], "HTTP/");

    // printf("pStringI: %s\n", pStringI);
    // printf("pStringF: %s\n", pStringF);

    if (pStringF != NULL){
        pStringI = &ReqBuffer[StringPos];
        pStringF = strstr((const char *) &ReqBuffer[StringPos], "/");

        printf("pStringI: %s\n", pStringI);
        printf("pStringF: %s\n", pStringF);
    }



    return 0;
}

