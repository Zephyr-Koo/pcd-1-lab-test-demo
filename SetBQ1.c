#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DEGREE_TO_RADIAN 3.14159 / 180
#pragma warning(disable: 4996)

double getRadian(int degree); // convert from degree to radian

int main()
{
    // Variable declaration
    int    x;
    double radian, y;

    // Request for input
    printf("Enter angle (degree): ");
    scanf("%d", &x);

    // Process
    radian = getRadian(x);
    y      = sin(radian);

    // Display output
    printf("The sine of %d degree is %f.", x, y);


    puts("\n");
    system("pause");
    return 0;
}

double getRadian(int degree)
{
    return degree * DEGREE_TO_RADIAN;
}