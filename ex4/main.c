#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, m;


    printf("Entrez la vitesse en km/h: ");
    scanf("%f", &km);


    m= km * 1093.61;

    printf("%.2f Km/h = %.2f m/s\n", km, m);
    return 0;
}
