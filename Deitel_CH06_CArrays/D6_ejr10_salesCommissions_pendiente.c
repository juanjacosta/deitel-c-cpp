/**
 * @file D6_ejr10_salesCommissions.c
 * @brief Use a one-dimensional array to solve the following problem.
 *        A company pays its salespeople on a comission basis. The
 *        salespeople receive $200 per week plus 9% of their gross
 *        sales for that week. For example, a salesperson who grosses
 *        $3,000 in sales in a week receives $200 plus 9% of $3,000,
 *        or a total of $470. Write a C program (using an array of
 *        counters) that determines how many of the salespeople
 *        earned salaries in each of the following ranges (assume
 *        that each salesperson's salary is truncated to an integer
 *        amount):
 *        a) $200 - 299
 *        b) $300 - 399
 *        c) $400 - 499
 *        d) $500 - 599
 *        e) $600 - 699
 *        f) $700 - 799
 *        g) $800 - 899
 *        h) $900 - 999
 *        i) $1000 and over
 *
 *      PENDIENTE IMPRIMIR RANGO length_range
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int salaries[9] = {200, 300, 400, 500, 600, 700, 800, 900, 1000};
    char *range1 = "$200 - 299";
    char *range3 = "$400 - 499";

    int grosses_sales = 0;       // ventas brutas
    int salesperson_grosses = 0; // ingresos brutos del vendedor

    puts("Salesperson");
    printf("%s", "sales grosses: ");
    scanf("%d", &grosses_sales);

    salesperson_grosses = 200 + (0.09 * grosses_sales);

    printf("Salesperson grosses: %d\n", salesperson_grosses);

    char range = ' ';
    char *length_range;

    if ((salesperson_grosses >= salaries[0]) && (salesperson_grosses < salaries[1]))
    {
        range = 'a';
        length_range = malloc(strlen(range1) + 1);
        strcpy(length_range, range1);
    }
    else if ((salesperson_grosses >= salaries[1]) && (salesperson_grosses < salaries[2]))
    {
        range = 'b';
    }
    else if ((salesperson_grosses >= salaries[2]) && (salesperson_grosses < salaries[3]))
    {
        range = 'c';
        length_range = malloc(strlen(range3) + 1);
        if (length_range == NULL)
        {
            return 1;
        }
        strcpy(length_range, range3);
    }
    else if ((salesperson_grosses >= salaries[3]) && (salesperson_grosses < salaries[4]))
    {
        range = 'd';
    }
    else if ((salesperson_grosses >= salaries[4]) && (salesperson_grosses < salaries[5]))
    {
        range = 'e';
    }
    else if ((salesperson_grosses >= salaries[5]) && (salesperson_grosses < salaries[6]))
    {
        range = 'f';
    }
    else if ((salesperson_grosses >= salaries[6]) && (salesperson_grosses < salaries[7]))
    {
        range = 'g';
    }
    else if ((salesperson_grosses >= salaries[7]) && (salesperson_grosses < salaries[8]))
    {
        range = 'h';
    }
    else
    {
        range = 'i';
    }

    printf("Salesperson range: %c [%s]\n", range, length_range);
    puts("");
}