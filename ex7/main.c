#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    float moyenne;
    int coef1 = 2, coef2 = 3, coef3 = 5;


    printf("Entrez le premier nombre : ");
    scanf("%f", &a);

    printf("Entrez le deuxi�me nombre : ");
    scanf("%f", &b);

    printf("Entrez le troisi�me nombre : ");
    scanf("%f", &c);


    M = (a * coef1 + b * coef2 + c * coef3) / (coef1 + coef2 + coef3);


    printf("La moyenne pond�r�e est : %.2f\n", M);

    return 0;
}

