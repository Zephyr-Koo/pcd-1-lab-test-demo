#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable: 4996)

int main()
{
    // Variable declaration
    int    x;
    double y;

    // Request for input
    printf("Enter an integer: ");
    scanf("%d", &x);

    // Process
    y = sqrt(x);

    // Display output
    printf("The square root of %d is %f.", x, y);


    puts("\n");
    system("pause");
    return 0;
}