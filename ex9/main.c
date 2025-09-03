#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double x1, y1, z1;
    double x2, y2, z2;
    double distance;


    printf("Entrez les coordonnées du premier point (x1 y1 z1) : ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);


    printf("Entrez les coordonnées du deuxième point (x2 y2 z2) : ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);


    distance = sqrt((x2 - x1)*(x2 - x1) +
                    (y2 - y1)*(y2 - y1) +
                    (z2 - z1)*(z2 - z1));


    printf("La distance euclidienne entre les deux points est : %.4f\n", distance);

    return 0;
}
