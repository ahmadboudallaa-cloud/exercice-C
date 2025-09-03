#include <stdio.h>
#include <stdlib.h>


void afficherBinaire(int n) {
    int i;
    int taille = sizeof(n) * 8;

    printf("Binaire : ");
    for (i = taille - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);


        if (i % 4 == 0 && i != 0)
            printf(" ");
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Entrez un entier d�cimal : ");
    scanf("%d", &decimal);


    printf("Hexad�cimal : %x\n", decimal);


    afficherBinaire(decimal);

    return 0;
}
