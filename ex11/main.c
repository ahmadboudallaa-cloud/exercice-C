#include <stdio.h>
#include <stdlib.

int main() {
    float longueur, largeur, surface;

    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &longueur);

    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &largeur);
    if (longueur <= 0 || largeur <= 0) {
        printf("Erreur : la longueur et la largeur doivent être positives.\n");
        return 1;
    }

    surface = longueur * largeur;

    printf("La surface du rectangle est : %.2f\n", surface);

    return 0;
}

