#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define RUPIAH_TO_RINGGIT 0.00028

double getRinggit(int rupiah); // convert from Rupiah to Ringgit

int main()
{
    // Variable declaration
    int    R[SIZE] = { 1000000, 2000000, 3000000, 4000000, 5000000 };
    double RM[SIZE];

    // Display output
    puts("Rupiah (R) \t Ringgit (RM)");
    puts("-------------------------------");

    // Iterate
    for (int i = 0; i < SIZE; ++i)
    {
        /*
            for each Indonesia Rupiah in array R,
            compute its money equivalent in Ringgit Malaysia and
            store in the same index location in array RM.
        */
        RM[i] = getRinggit(R[i]);

        printf("%d \t %7.2f \n", R[i], RM[i]);
    }

    puts("-------------------------------");


    puts("\n");
    system("pause");
    return 0;
}

double getRinggit(int rupiah)
{
    return rupiah * RUPIAH_TO_RINGGIT;
}