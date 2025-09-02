#include <stdio.h>
#include <stdlib.h>

int main()
{
     float T;

    printf("Entrez la temperature en degres Celsius : ");
    scanf("%f", &T);


    if (T < 0) {
        printf("A %.2f °, l'eau est a l'etat SOLIDE (glace).\n", T);
    } else if (T >= 0 && T < 100) {
        printf("A %.2f °, l'eau est a l'etat LIQUIDE(eau).\n", T);
    } else {
        printf("A %.2f °, l'eau est a l'etat GAZEUX (vapeur).\n", T);
    }
    return 0;
}
