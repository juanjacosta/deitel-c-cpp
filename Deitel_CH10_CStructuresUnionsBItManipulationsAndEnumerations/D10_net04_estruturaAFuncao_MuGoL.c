#include "stdio.h"

struct puertos{
    int tx, rx;
    int p1, p2, p3;
};

struct puertos leePuertos(struct puertos p);

int main()
{
    struct puertos serial;
    struct puertos *ptrSerial;

    ptrSerial = &serial;

    struct puertos usart;

    usart = leePuertos(serial);

    printf("%d, %d\n", usart.tx, usart.rx);

    return 0;
}

struct puertos leePuertos(struct puertos p)
{
    p.tx = 10;
    p.rx = 11;

    return p;
}