#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 5

int main()
{
    // Variable declaration
    int    X[SIZE] = { 10, 20, 30, 40, 50 };
    double Y[SIZE];

    // Display output
    puts("X \t Y");
    puts("----------------");

    // Iterate
    for (int i = 0; i < SIZE; ++i)
    {
        /*
            for each value in array X, compute its square root and
            store in the same index location in array Y.
        */
        Y[i] = sqrt(X[i]);

        printf("%d \t %.2f \n", X[i], Y[i]);
    }

    puts("----------------");


    puts("\n");
    system("pause");
    return 0;
}