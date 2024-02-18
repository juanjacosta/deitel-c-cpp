#include <stdio.h>

int main()
{   
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x, *p, *q, *k;

    printf("%d\n", *a);
    printf("%p\n", &a[0]);
    printf("%p\n", a);
    printf("\n");
    x = 5;
    p = &x;
    q = p;

    printf("%p\n", p);
    printf("%p\n", q);
    printf("%p\n", &x);
    printf("\n");

    *p = 6;
    *q = 3;

    printf("%d\n", x);

    k = a;
    printf("%d\n", k[5]);
    printf("%d\n", *(k + 5));

    return 0;
}