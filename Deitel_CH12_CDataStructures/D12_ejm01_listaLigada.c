/*
    Programa : D12_ejm01_listaLigada.c
    Proposito: Permitir al usuario agregar o eliminar elementos a una lista ligada de datos 
               mediante asignación dinámica de memoria usando estructuras autoreferenciadas.
               Teniendo en cuenta que una lista ligada es una colección lineal de nodos, los 
               cuales son estructuras autoreferenciadas, y donde para acceder a la lista se 
               usa un apuntador al primer nodo de la lista pero también es posible acceder a los 
               nodos subsiguientes a través del miembro liga de cada nodo. Por convención, el 
               apuntador liga del último nodo de una lista se establece en NULL, para marcar 
               el final de la lista. 
*/

#include <stdio.h>
#include <stdlib.h>

/* Estructura autoreferenciada */
struct nodoLista{
    char dato;                              // cada nodo contiene un caracter
    struct nodoLista *ptrSiguiente;         // apuntador al siguiente nodo 
};

typedef struct nodoLista NodoLista;         // sinónimo para la estructura nodoLista
typedef NodoLista *ptrNodoLista;            // sinónio "de para" NodoLista

/* Prototipos de funciones */
void insertar(ptrNodoLista *ptrS, char valor);
char eliminar(ptrNodoLista *ptrS, char valor);
int estaVacia(ptrNodoLista ptrS);
void imprimeLista(ptrNodoLista ptrActual);
void instrucciones(void); 

int main()
{
    ptrNodoLista ptrInicial = NULL;         // inicialmente no existen nodos 
    int eleccion;                           // elección del usuario
    char elemento;                          // caracter introducido por el usuario 
    
    printf("==================================================\n");
    instrucciones();                        // despliega el menu 
    printf("==================================================\n");
    printf("Opcion: ");
    scanf("%d", &eleccion);

    while (eleccion != 3){
        
        switch (eleccion)
        {
        case 1:
            printf("Introduzca un caracter: ");
            scanf("\n%c", &elemento);
            insertar(&ptrInicial, elemento);    // inserta el elemento en la lista 
            imprimeLista(ptrInicial);
            break;

        case 2:                                  
            if (!estaVacia(ptrInicial)){        // Si la lista no esta vacia
                printf("Introduzca un caracter para eliminar: ");
                scanf("\n%c", &elemento);

                /* Si encuentra el caracter lo remueve */
                if (eliminar(&ptrInicial, elemento)){
                    printf("caracter %c eliminado\n", elemento);
                    imprimeLista(ptrInicial);                                       
                }
                else {
                    printf("no se encuentra el caracter %c \n\n", elemento);
                }
            }
            else {
                printf("La lista esta vacia\n\n");
            }
            break;
        
        default:
            printf("Opcion Invalida\n\n");
            instrucciones();
            break;
        }

        printf("Opcion: ");
        scanf("%d", &eleccion);
    }
    printf("Fin de la ejecucion\n");

    return 0;
}

/* Definicion de Funciones */
void instrucciones(void)
{
    printf("Introduzca su eleccion:\n"
    "\t1 para insertar un elemento en la lista\n"
    "\t2 para eliminar un elemento de la lista\n"
    "\t3 para terminar\n");
}

void insertar(ptrNodoLista *ptrS, char valor)
{
    ptrNodoLista ptrNuevo;                  // apuntador a un nodo nuevo 
    ptrNodoLista ptrAnterior;               // apuntador a un nodo previo de la lista 
    ptrNodoLista ptrActual;                 // apuntador al nodo acutal de la lista 

    ptrNuevo = malloc(sizeof(NodoLista));   // crea un nodo 

    if (ptrNuevo != NULL){                  // verifica tamnanio en bytes del tipo struct nodoLista NodoLista 
        ptrNuevo->dato = valor;             // coloca el valor en el nodo 
        ptrNuevo->ptrSiguiente = NULL;      // el nodo no se liga a otro nodo 

        ptrAnterior = NULL;
        ptrActual = *ptrS;

        /* Ciclo para localizar la ubicación correcta en la lista */
        while (ptrActual != NULL && valor > ptrActual->dato){
            ptrAnterior = ptrActual;                // entra al . . .
            ptrActual = ptrActual->ptrSiguiente;    // . . . siguiente nodo 
        }

        /* Inserta un nuevo nodo al principio de la lista */
        if (ptrAnterior == NULL){
            ptrNuevo->ptrSiguiente = *ptrS;
            *ptrS = ptrNuevo;
        }
        /* Inserta un nuevo nodo entre ptrAnterior y ptrActual */
        else {
            ptrAnterior->ptrSiguiente = ptrNuevo;
            ptrNuevo->ptrSiguiente = ptrActual;
        }
    }  
    else {
        printf("No se inserto %c. No hay memoria disponible\n", valor);
    } 
}

char eliminar(ptrNodoLista *ptrS, char valor)
{
    ptrNodoLista ptrAnterior;                       // apuntador a un nodo previo de la lista 
    ptrNodoLista ptrActual;                         // apuntador al nodo acutal de la lista 
    ptrNodoLista tempPtr;                           // apuntador a un nodo temporal 

    /* elimina el primer nodo */
    if (valor == (*ptrS)->dato){
        tempPtr = *ptrS;                            // almacena temporalmente el nodo a eliminar 
        *ptrS = (*ptrS)->ptrSiguiente;              // desata el nodo 
        free(tempPtr);                              // libera el nodo desatado 
        return valor;
    }
    else {
        ptrAnterior = *ptrS;
        ptrActual = (*ptrS)->ptrSiguiente;

        /* ciclo para localizar la ubicacion correcta en la lista */
        while (ptrActual != NULL && ptrActual->dato != valor){
            ptrAnterior = ptrActual;                // entra al . . . 
            ptrActual = ptrActual->ptrSiguiente;    // . . . siguiente nodo 
        }

        /* elimina el nodo de ptrActual */
        if (ptrActual != NULL){
            tempPtr = ptrActual;
            ptrAnterior->ptrSiguiente = ptrActual->ptrSiguiente;
            free(tempPtr);
            return valor;
        }
    }
    return '\0';
}

int estaVacia(ptrNodoLista ptrS)
{
    return ptrS == NULL;
}

void imprimeLista(ptrNodoLista ptrActual)
{
    if (ptrActual == NULL){                 // Si la lista está vacía 
        printf("La lista esta vacia\n\n");
    }
    else {
        printf("La lista es:\n");

        while (ptrActual != NULL){          // Mientra no sea el final de la lista 
            printf("%c -> ", ptrActual->dato);
            ptrActual = ptrActual->ptrSiguiente;
        }
        printf("NULL\n\n");
    }
}

