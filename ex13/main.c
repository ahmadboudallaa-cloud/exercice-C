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

    printf("Entrez un entier décimal : ");
    scanf("%d", &decimal);


    printf("Hexadécimal : %x\n", decimal);


    afficherBinaire(decimal);

    return 0;
}
