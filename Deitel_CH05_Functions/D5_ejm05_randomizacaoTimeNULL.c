#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TIROS 6000

int main()
{
    int i, cara;

    int fq1 = 0;
    int fq2 = 0;
    int fq3 = 0;
    int fq4 = 0;
    int fq5 = 0;
    int fq6 = 0;
    
    printf("=======================================\n");
    printf("\tSimulacion tiro de dados\n");
    printf("========================================\n");

    srand(time(NULL));

    for (i = 0; i < TIROS; i++){
        cara = 1 + rand() % 6;

        switch(cara){
            case 1: 
                fq1 += 1;
                break;
            
            case 2: 
                fq2 += 1;
                break;
            case 3: 
                fq3 += 1;
                break;

            case 4: 
                fq4 += 1;
                break;

            case 5: 
                fq5 += 1;
                break;

            case 6: 
                fq6 += 1;
                break;
        }
    }

    printf("%7s%14s\n", "Cara", "Frecuencia");
    printf("========================================\n");
    printf("    1%15d\n", fq1);
    printf("    2%15d\n", fq2);
    printf("    3%15d\n", fq3);
    printf("    4%15d\n", fq4);
    printf("    5%15d\n", fq5);
    printf("    6%15d\n", fq6);


    return 0;
}