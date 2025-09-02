#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, Y;


    printf("Entrez la distance en kilometres : ");
    scanf("%f", &km);


    Y = km * 1093.61;

    printf("%.2f kilometres = %.2f yards\n", km, Y);
    return 0;
}
