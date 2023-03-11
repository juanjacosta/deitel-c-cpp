/*
    Esta función pertenece a las FUNCIONES DE MEMORIA de la 
    biblioteca de manipulación de cadenas 
  
    void *memcpy(void *s1, const void *s2, size_t n);

    memcpy copia n caracteres desde el objeto al que apunta s2, dentro del 
    objeto al que apunta s1. Devuelve un apuntador al objeto resultante.

    void * memcpy ( void * destination, const void * source, size_t num );
*/

#include <stdio.h>
#include <string.h>

struct{
    char name[40];
    int age;
}person, person_copy;

int main()
{
    char myname[] = "Pierre de Fermat";

    /* using memcpy to copy string */
    memcpy(person.name, myname, strlen(myname)+1);
    person.age = 46;
    printf("Name: %s\nAge: %d\n", person.name, person.age);
    
    printf("\n");
    /* using memcpy to copy structure */
    memcpy(&person_copy, &person, sizeof(person));
    printf("person_copy: %s, %d\n", person_copy.name, person_copy.age);

    return 0;
}