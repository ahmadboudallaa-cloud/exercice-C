#include <stdio.h>
#include <stdlib.h>

int main()
{
     float num1, num2, R;
    char Op;


    printf("Entrez le premier nombre : ");
    scanf("%f", &num1);

    printf("Entrez un operateur (+, -, *, /) : ");
    scanf(" %c", &Op);  // espace avant %c pour ignorer les espaces

    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &num2);

    switch (Op) {
        case '+':
            R = num1 + num2;
            printf("Resultat : %.2f\n", R);
            break;

        case '-':
            R = num1 - num2;
            printf("Resultat : %.2f\n", R);
            break;

        case '*':
            R = num1 * num2;
            printf("Resultat : %.2f\n", R);
            break;

        case '/':
            if (num2 != 0) {
                R = num1 / num2;
                printf("Resultat : %.2f\n", R);
            } else {
                printf("Erreur : division par zero impossible !\n");
            }
            break;

        default:
            printf("Operateur invalide !\n");
    }

    return 0;
}
