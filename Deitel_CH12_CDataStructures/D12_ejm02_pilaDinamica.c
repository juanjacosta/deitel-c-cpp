/**
   Programa : D12_ejm02_pilaDinamica.c
   Propósito: Permitir al usuario agregar o eliminar elementos a una lista ligada de datos 
              mediante la asignación dinámica de memoria usando una pila. Teniendo en cuenta
              que una lista es una versión restringida de una lista ligada, donde los nuevos 
              nodos solo pueden anadirse o eliminarse sólo en la cima. Por eso se conoce como 
              una estructura de datos "última en entrar, primera en salir (UEPS)". Se hace 
              referencia a una pila por medio de un apuntador hacia el elemento en la cima 
              de la pila. El miembro liga del último nodo de la pila se establece en NULL 
              para indicar el fondo de la pila.
 */

#include <stdio.h>
#include <stdlib.h>

/* estructura autoreferenciada */
struct nodoPila{
    int dato;
    struct nodoPila *ptrSiguiente;          // apuntados a nodo pila
};

typedef struct nodoPila NodoPila;           // sinonimo de la estructura nodoPila 
typedef NodoPila *ptrNodoPila;              // sinonimo para NodoPila 

/* Prototipos de funciones */
void empujar(ptrNodoPila *ptrCima, int info);
int sacar(ptrNodoPila *ptrCima);
int estaVacia(ptrNodoPila ptrCima);
void imprimePila(ptrNodoPila ptrActual);
void instrucciones(void);

int main()
{
    ptrNodoPila ptrPila = NULL;             //  Apunta al tope de la pila 
    int eleccion;                           // eleccion de menu del usuario
    int valor;                              // entrada int del usuario 

    printf("==================================================\n");
    instrucciones();                        // despliega el menu 
    printf("==================================================\n");
    printf("Opcion: ");
    scanf("%d", &eleccion);

    /* Mientras el usuario no introduzca 3 */
    while (eleccion != 3){

        switch (eleccion)
        {
        /* empuja el valor dentro de la pila */
        case 1:
            printf("Introduzca un entero: ");
            scanf("%d", &valor);
            empujar(&ptrPila, valor);
            imprimePila(ptrPila);
            break;

        /* saca el valor de la pila */
        case 2:
            if (!estaVacia(ptrPila)){
                printf("El valor sacado es %d\n", sacar(&ptrPila));                
            }
            imprimePila(ptrPila);
            break; 
        
        default:
            printf("Eleccion no valida\n\n");
            instrucciones();
            break;
        }

        printf("Opcion: ");
        scanf("%d", &eleccion);
    }

    printf("Fin del programa\n");
    printf("==================================================\n");
    
    return 0;
}

/* Definiciones de funciones */
void instrucciones(void)
{
    printf("Introduzca su eleccion:\n"
        "\t1 para empujar un valor dentro de la pila\n"
        "\t2 para sacar un valor de la pila\n"
        "\t3 para terminar el programa\n");
}

/* Inserta un node en la cima de la pila */
void empujar(ptrNodoPila *ptrCima, int info)
{
    ptrNodoPila ptrNuevo;                   // apuntador al nuevo nodo 

    ptrNuevo = malloc(sizeof(NodoPila));

    /* Inserta el nodo en la cima de la pila */
    if (ptrNuevo != NULL){
        ptrNuevo->dato = info;
        ptrNuevo->ptrSiguiente = *ptrCima;
        *ptrCima = ptrNuevo;
    }                      
    else {                                  // en caso de que no quede espacio suficiente 
        printf("%d no se inserto. Memoria insuficiente\n", info);
    }
}

/* Elimina un nodo de la cima de la pila */
int sacar(ptrNodoPila *ptrCima)
{
    ptrNodoPila ptrTemp;                    // apuntador a un nodo temporal 
    int valorElim;                          // valor del nodo 

    ptrTemp = *ptrCima;
    valorElim = (*ptrCima)->dato;
    *ptrCima = (*ptrCima)->ptrSiguiente;
    free(ptrTemp);

    return valorElim;
}

int estaVacia(ptrNodoPila ptrCima)
{
    return ptrCima == NULL; 
}

void imprimePila(ptrNodoPila ptrActual)
{
    if (ptrActual == NULL){                 // si la pila esta vacia 
        printf("La pila esta vacia\n\n");
    }
    else {
        printf("La pila es:\n");

        /* Mientras no sea el final de la pila */
        while (ptrActual != NULL){
            printf("%d ->", ptrActual->dato);
            ptrActual = ptrActual->ptrSiguiente;
        }
        printf("NULL\n\n");
    }
}

