#include <stdio.h>
#include <stdlib.h>

int main()
{
     float C,K;


    printf("Entrez la temperature en degres Celsius : ");
    scanf("%f", &C);


    K = C + 273.15;


    printf("%.2f ° = %.2f Kelvin\n", C, K);
    return 0;
}
