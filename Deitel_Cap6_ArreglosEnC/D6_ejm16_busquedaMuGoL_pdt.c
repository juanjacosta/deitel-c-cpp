/* Programa: D6_ejm16_busquedaMuGoL.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15

size_t linealSearch(const int data[], int _key, size_t size);
size_t binarySearch(const int data[], int _key, size_t low, size_t high);
void orderDataArray(int data[], size_t size);
void printRow(const int data[], size_t low, size_t mid, size_t high);
void printArray(const int data[], size_t size);
int my_puts(char const s[static 1]);

int main(void)
{
    puts("\n*** Algoritmos de Busqueda ***");
    int array[SIZE];
    int key, op;
    size_t pos_key;

    srand(time(NULL));

    for (size_t i = 0; i < SIZE; i++)
    {
        array[i] = 1 + (rand() % SIZE);
    }

    printArray(array, SIZE);

    my_puts("Enter search key: ");
    scanf("%d", &key);

    puts("\t1. Busqueda Lineal");
    puts("\t2. Busqueda Binaria");
    puts("\t3. EXIT");

    my_puts("Enter search option (Press ctrl+c for exit): ");
    scanf("%d", &op);
    puts("");

    // while ((op = getchar()) != EOF)
    // while (op != 3)
    // {
    if (op == 1)
    {
        pos_key = linealSearch(array, key, SIZE);
    }
    else if (op == 2)
    {
        orderDataArray(array, SIZE);
        puts("*** Ordered Array ***");
        printArray(array, SIZE);
        pos_key = binarySearch(array, key, 0, SIZE - 1);
    }
    else
    {
        puts("Invalid Option");
    }

    if (pos_key != -1)
    {
        printf("%d found at index %d\n", key, pos_key + 1);
    }
    else
    {
        printf("%d not found\n", key);
    }

    puts("");

    //     my_puts("Enter search option: ");
    //     scanf("%d", &op);
    // }
}

void printArray(const int data[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }
    puts("");
}

size_t linealSearch(const int data[], int _key, size_t size)
{
    puts("*** Busqueda Lineal ***");
    for (size_t i = 0; i < size; i++)
    {
        if (data[i] == _key)
        {
            return i;
        }
    }
    return -1;
}

size_t binarySearch(const int data[], int _key, size_t low, size_t high)
{
    puts("\n*** Busqueda Binaria ***\n");

    while (low <= high)
    {
        size_t middle = (low + high) / 2;

        printRow(data, low, middle, high);

        if (_key == data[middle])
        {
            return middle;
        }
        else if (_key < data[middle])
        {
            high = middle - 1;
                }
        else
        {
            low = middle + 1;
        }
    }
    return -1;
}

void orderDataArray(int data[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (data[i] > data[i + 1])
        {
            int tmp = data[i];
            data[i] = data[i + 1];
            data[i + 1] = tmp;
        }
    }
}

void printRow(const int data[], size_t low, size_t mid, size_t high)
{
    for (size_t i = 0; i < SIZE; i++)
    {
        if (i < low || i > high)
        {
            printf(" "); // despliega espacios si se encuentra fuera del rango
        }
        if (i == mid)
        {
            printf("%d* ", data[i]); // despliega el elemento central
        }
        else
        {
            printf("%d ", data[i]); // despliega otros elementos en el subarreglo
        }
    }
    puts("");
}

int my_puts(char const s[static 1])
{
    for (size_t i = 0; s[i]; i++)
    {
        if (putchar(s[i]) == EOF)
        {
            return EOF;
        }
    }
}