#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 5
#define DEGREE_TO_RADIAN 3.14159 / 180

double getRadian(int degree); // convert from degree to radian

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
            for each angle (degree) in array X,
            converts into radian compute its cosine and
            store in the same index location in array Y.
        */
        Y[i] = cos(getRadian(X[i]));

        printf("%d \t %.2f \n", X[i], Y[i]);
    }

    puts("----------------");


    puts("\n");
    system("pause");
    return 0;
}

double getRadian(int degree)
{
    return degree * DEGREE_TO_RADIAN;
}