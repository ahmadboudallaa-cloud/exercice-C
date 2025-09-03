#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c;
    double moyenneGeo;

    printf("Entrez le premier nombre : ");
    scanf("%lf", &a);

    printf("Entrez le deuxi�me nombre : ");
    scanf("%lf", &b);

    printf("Entrez le troisi�me nombre : ");
    scanf("%lf", &c);


    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Erreur : tous les nombres doivent �tre strictement positifs.\n");
        return 1;
    }


    moyenneGeo = cbrt(a * b * c);


    printf("La moyenne g�om�trique est : %.4f\n", moyenneGeo);

    return 0;
}
