#include <stdio.h>
#include <math.h>

int main()
{
    int n, A ,x;
    float r;
    printf("Entrer la valeur de x (en dihrams) : ");
    scanf("%d",&x);
    printf("Entrer le nombre d'annees : ");
    scanf("%d",&n);
    printf("Entrer le taux (pourcentage) : ");
    scanf("%f",&r);
    r /= 100;
    A = x*pow(1 + r, n);
    printf("%d",A);
    return 0;
}
/*Exercice 2
Ecrire un programme qui calcule le capital A produit par x Dirhams, placés au taux r au bout de n
années (x, n et r étant donnés par l’utilisateur), avec :*/
