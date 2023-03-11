/**
 *  Programa : D12_ejm03_cola.c
 *  Propósito: Permitir al usuario agregar o eliminar elementos a una lista ligada de datos mediante
               asignación dinámica de memoria usando una cola. Teniendo en cuenta que a diferencia 
               de las pilas y las listas, en una cola los nodos se eliminan solo en la cabeza 
               y se insertan solo en los talones, comportamiento analogo a una fila de 
               supermercado. Por eso se conoce como una estructura de datos 
               "primera en entrar, primera en salir (PEPS)". Se hace referencia a una pila por medio 
               de dos apuntadores, de un apuntador hacia el elemento en la cima de la cola y otro 
               hacia el elemento talón o último nodo de la cola.
 */

#include <stdio.h>
#include <stdlib.h>

/* estructura autoreferenciada */
struct nodoCola{
    char dato;
    struct nodoCola *ptrSiguiente;                      // apuntador tipo nodoCola al siguiente nodo
};

typedef struct nodoCola NodoCola;                       // sinónimo para la estructura nodoCola 
typedef NodoCola *ptrNodoCola;                          // apuntador tipo nodoCola 

/* prototipos de funciones */
void imprimeCola(ptrNodoCola ptrActual);
int estaVacia(ptrNodoCola ptrCabeza);
char retirar(ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon);
void agregar(ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon, char valor);
void instrucciones(void);

int main()
{
    ptrNodoCola ptrCabeza = NULL;                       // inicializa ptrCabeza
    ptrNodoCola ptrTalon = NULL;                        // inicializa ptrTalon 
    int eleccion;                                       // eleccion de menu del usuario 
    char elemento;                                      // entrada char del usuario 

    printf("==================================================\n");
    instrucciones();                                    // despliega menu del usuario 
    printf("==================================================\n");
    printf("Opcion: ");
    scanf("%d", &eleccion);

    while (eleccion != 3){
        switch (eleccion)
        {
        /* agregar un valor */
        case 1:
            printf("Introduzca un caracter: ");
            scanf("\n%c", &elemento);
            agregar(&ptrCabeza, &ptrTalon, elemento);
            imprimeCola(ptrCabeza);
            break;

        /* retirar un valor */
        case 2:
            if (!estaVacia(ptrCabeza)){                 // si la cola no está vacía 
                elemento = retirar(&ptrCabeza, &ptrTalon);
                printf("se desenfiló %c\n", elemento);
            }
            imprimeCola(ptrCabeza);
            break;
        
        default:
            printf("Eleccion no valida\n\n");
            instrucciones();
            break;
        }
        printf("Opcion: ");
        scanf("%d", &eleccion);
    }
    printf("==================================================\n");
    printf("Fin de programa\n");
    printf("==================================================\n");

    return 0;
}

/* Definicion de funciones */
void instrucciones(void)
{
    printf("Introduzca su eleccion:\n"
        "\t1 para agregar un elemento de la cola\n"
        "\t2 para eliminar un elemento de la cola\n"
        "\t3 para terminar\n");
}

/* Inserta un nodo al final de la cola */
void agregar(ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon, char valor)
{
    ptrNodoCola ptrNuevo;                                   // apuntador a un nuevo nodo 

    ptrNuevo = malloc(sizeof(NodoCola));

    if (ptrNuevo != NULL){                                  // Si hay espacio disponible 
        ptrNuevo->dato = valor;
        ptrNuevo->ptrSiguiente = NULL; 

        /* si esta vacía inserta un nodo en la cabeza */
        if (estaVacia(*ptrCabeza)){
            *ptrCabeza = ptrNuevo;
        }
        else {
            (*ptrTalon)->ptrSiguiente = ptrNuevo;
        }
        *ptrTalon = ptrNuevo;
    }
    else {
        printf("No se inserto %c. No hay memoria disponible\n", valor);
    }
}

void imprimeCola(ptrNodoCola ptrActual)
{
    /* si la cola esta vacía */
    if (ptrActual == NULL){
        printf("La cola esta vacía\n\n");
    } 
    else {
        printf("La cola es:\n");

        while (ptrActual != NULL){
            printf("%c -> ", ptrActual->dato);
            ptrActual = ptrActual->ptrSiguiente;
        }
        printf("NULL\n\n");
    }
}

int estaVacia(ptrNodoCola ptrCabeza)
{
    return ptrCabeza == NULL; 
}

char retirar(ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon)
{
    char valor;                                             // valor del nodo 
    ptrNodoCola tempPtr;                                    // apuntador a un nodo temporal 

    valor = (*ptrCabeza)->dato;
    tempPtr = *ptrCabeza;
    *ptrCabeza = (*ptrCabeza)->ptrSiguiente;

    if (*ptrCabeza == NULL){                                // si la cola está vacía 
        *ptrTalon = NULL;
    } 
    free(tempPtr);

    return valor;
}



