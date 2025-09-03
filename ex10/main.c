#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double rayon, volume;

    printf("Entrez le rayon de la sphère : ");
    scanf("%lf", &rayon);

    if (rayon < 0) {
        printf("Erreur : le rayon doit être positif.\n");
        return 1;
    }

    volume = (4.0 / 3.0) * M_PI * pow(rayon, 3);


    printf("Le volume de la sphère est : %.4f\n", volume);

    return 0;
}
