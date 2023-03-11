/*
    Programa : D12_ejm04_arbolBinario.c
    Propósito: Mostrar la estructura de datos no lineal de dos dimensiones que es un arbol, con 
               un ejemplo de árbol binario de búsqueda (sin valores duplicados de nodos), que 
               tiene la característica de que los valores de cualquier subárbol izquierdo son 
               menores que el valor de su nodo padre, y que los valores de cualquier subárbol 
               derecho son mayores que el valor de su nodo padre. En un arbol binario de busqueda,
               solo puede insertarse un nodo en la forma de nodo hoja, que es un nodo sin hijos.  
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* estructura autoreferenciada */
struct nodoArbol{
    struct nodoArbol *ptrIzq;                           // apuntado al subárbol izquierdo 
    int dato;                                           // valor del nodo 
    struct nodoArbol *ptrDer;                           // apuntador al subárbol derecho 
};

typedef struct nodoArbol NodoArbol;                     // sinónimo de la estructura nodoArbol
typedef NodoArbol *ptrNodoArbol;                        // apuntador a la estructura nodoArbol

/* protoripos de funciones */
void insertaNodo(ptrNodoArbol *ptrArbol, int valor);
void inOrden(ptrNodoArbol ptrArbol);
void preOrden(ptrNodoArbol ptrArbol);
void posOrden(ptrNodoArbol ptrArbol);

int main()
{
    int i;                                              // contador para el ciclo de 1 a 10 
    int elemento;                                       // variable para almacenar valores a azar 
    ptrNodoArbol ptrRaiz = NULL;                        // árbol inicialmente vacío 

    printf("==================================================\n");
    srand(time(NULL));
    printf("Los números colocados en el arbol son:\n");

    /* inserta valores al azar entre 1 y 15 en el árbol */
    for (i = 1; i <= 10; i++){
        elemento = rand() % 15;
        printf("%3d", elemento);
        insertaNodo(&ptrRaiz, elemento);
    }
    /* recorre el arbol en preorden */
    printf("\n\nEl recorrido en preorden es:\n");
    preOrden(ptrRaiz);

    /* recorre el arbol en inorden */
    printf("\n\nEl recorrido en inorden es:\n");
    inOrden(ptrRaiz);

    /* recorre el arbol en posorden */
    printf("\n\nEl recorrido en posorden es:\n");
    posOrden(ptrRaiz);

    printf("\n==================================================\n");

    return 0;
}

void insertaNodo(ptrNodoArbol *ptrArbol, int valor)
{
    /* si el árbol está vacío */
    if (*ptrArbol == NULL){
        *ptrArbol = malloc(sizeof(NodoArbol));

        /* si la memoria está asignada, entonces asigna el dato */
        if (*ptrArbol != NULL){
            (*ptrArbol)->dato = valor;
            (*ptrArbol)->ptrIzq =  NULL;
            (*ptrArbol)->ptrDer = NULL;
        }
        else {
            printf("no se incerto %d. No hay memoria disponible\n", valor);
        }
    }
    else {                                              // si el árbol no está vacío 
        /* si el dato a insertar es menor que el dato en el nodo actual */
        if (valor < (*ptrArbol)->dato){
            insertaNodo(&((*ptrArbol)->ptrIzq), valor);            
        }
        /* si el dato a insertar es MAYOR que el dato en el nodo actual */
        else if (valor > (*ptrArbol)->dato){
            insertaNodo(&((*ptrArbol)->ptrDer), valor);
        }
        else {                                          // ignora el valor duplicado del dato 
            printf("dup");
        }
    }
}

/* comienza el recorrido inorden del árbol */
void inOrden(ptrNodoArbol ptrArbol)
{
    if (ptrArbol != NULL){                              // si el árbol no está vacío, entonces recórrelo
        inOrden(ptrArbol->ptrIzq);
        printf("%3d", ptrArbol->dato);
        inOrden(ptrArbol->ptrDer);
    }
}

/* comienza el recorrido preorden del árbol */
void preOrden(ptrNodoArbol ptrArbol)
{
    if (ptrArbol != NULL){                              // si el árbol no está vacío, entonces recórrelo
        printf("%3d", ptrArbol->dato);
        preOrden(ptrArbol->ptrIzq);
        preOrden(ptrArbol->ptrDer);
    }
}

/* comienza el recorrido posorden del árbol */
void posOrden(ptrNodoArbol ptrArbol)
{
    if (ptrArbol != NULL){                              // si el árbol no está vacío, entonces recórrelo                               
        posOrden(ptrArbol->ptrIzq);
        posOrden(ptrArbol->ptrDer);
        printf("%3d", ptrArbol->dato);
    }
}