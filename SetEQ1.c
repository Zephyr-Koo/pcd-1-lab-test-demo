#include <stdio.h>
#include <stdlib.h>
#define MILE_TO_KILOMETER 1.609
#pragma warning(disable: 4996)

double getKilometer(int mile); // convert from mile to kilometer

int main()
{
    // Variable declaration
    int    mile;
    double kilometer;

    // Request for input
    printf("Enter distance (mile): ");
    scanf("%d", &mile);

    // Process
    kilometer = getKilometer(mile);

    // Display output
    printf("%d miles = %.3f kilometers", mile, kilometer);


    puts("\n");
    system("pause");
    return 0;
}

double getKilometer(int mile)
{
    return mile * MILE_TO_KILOMETER;
}