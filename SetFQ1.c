#include <stdio.h>
#include <stdlib.h>
#define RUPIAH_TO_RINGGIT 0.00028
#pragma warning(disable: 4996)

double getRinggit(int rupiah); // convert from Rupiah to Ringgit

int main()
{
    // Variable declaration
    int    rupiah;
    double ringgit;

    // Request for input
    printf("Enter amount (Indonesia Rupiah): ");
    scanf("%d", &rupiah);

    // Process
    ringgit = getRinggit(rupiah);

    // Display output
    printf("%d rupiah = %.2f ringgit", rupiah, ringgit);


    puts("\n");
    system("pause");
    return 0;
}

double getRinggit(int rupiah)
{
    return rupiah * RUPIAH_TO_RINGGIT;
}