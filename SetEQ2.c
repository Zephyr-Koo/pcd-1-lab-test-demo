#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define MILE_TO_KILOMETER 1.609

double getKilometer(int mile); // convert from mile to kilometer

int main()
{
    // Variable declaration
    int    M[SIZE] = { 50, 100, 150, 200, 250 };
    double KM[SIZE];

    // Display output
    puts("M \t KM");
    puts("----------------");

    // Iterate
    for (int i = 0; i < SIZE; ++i)
    {
        /*
           for each distance (mile) in array M,
           compute its distance equivalent in kilometer and
           store in the same index location in array KM.
        */
        KM[i] = getKilometer(M[i]);

        printf("%3d \t %6.2f \n", M[i], KM[i]);
    }

    puts("----------------");


    puts("\n");
    system("pause");
    return 0;
}

double getKilometer(int mile)
{
    return mile * MILE_TO_KILOMETER;
}