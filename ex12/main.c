#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombre;
    int c1, c2, c3, c4;
    int inverse;


    printf("Entrez un nombre à 4 chiffres : ");
    scanf("%d", &nombre);

    if (nombre < 1000 || nombre > 9999) {
        printf("Erreur : le nombre doit être composé de 4 chiffres.\n");
        return 1;
    }


    c1 = nombre / 1000;
    c2 = (nombre % 1000) / 100;
    c3 = (nombre % 100) / 10;


    inverse = c4 * 1000 + c3 * 100 + c2 * 10 + c1;


    printf("L'inverse est : %d\n", inverse);

    return 0;
}
