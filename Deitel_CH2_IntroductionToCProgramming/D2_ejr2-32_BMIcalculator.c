/**
 *  Programa : Create a BMI (Body Mass Index Calculator) application that reads the 
 *             user's weight in pounds and height in inches (or kilograms and meters),
 *             then calculates and displays the user's body mass index. The formulas 
 *             for calculating BMI are:
 * 
 *              BMI = (weightInPounds x 703) / (heighInInches x heighInInches)
 * 
 *              or
 * 
 *             BMI = (weightInKilograms) / (heighInMeters x heighInMeters)
 *  
 *             Also, the application should display the following information from 
 *             the Departament of Health and Human Services/National Institutes of 
 *             Health so the user  can evaluated hos/her BMI;
 */

#include <stdio.h>

int main()
{
    int mode, heightMt, weightMt;
    double heightSt, weightSt, feet, inches, meters, BMI;

    puts("==========================");
    puts("\tBMI Calculator");
    puts("==========================");
    printf("%s\n%s\n", "1. Standard", "2. Metric");
    printf("%s", "Select Mode: "); scanf("%d", &mode);
    puts("");

    if (mode == 1)
    {
        printf("%s", "Your Height (feet): "); scanf("%lf", &heightSt);
        printf("%s", "Your Weight (pounds): "); scanf("%lf", &weightSt);

        // printf("Height : %f\nWeight: %f\n", heightSt, weightSt);

        inches = heightSt * 12;

        BMI = (weightSt * 703) / (inches * inches);

    }

    if (mode == 2)
    {
        printf("%s", "Your Height (cm): "); scanf("%d", &heightMt);
        printf("%s", "Your Weight (kg): "); scanf("%d", &weightMt);

        // printf("Height : %d\nWeight: %d\n", heightMt, weightMt);

        meters = heightMt / 100.0;
        // meters = heightMt * 0.01;

        // printf("Meters: %f\n", meters);

        BMI = (double)weightMt / (meters * meters);
    }
    
    printf("\nYour BMI: %.2f\n\n", BMI);

    puts("BMI Values");
    puts("Underweight : less than 18.5");
    puts("Normal:       between 18.5 and 24.9");
    puts("Overweight:   between 25 and 29.9");
    puts("Obese:        30 or greater");

    return 0;
}