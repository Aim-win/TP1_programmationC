#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i,B , T1[100],T2[100];

    printf("Entrer la dimension du tableau :");
    scanf("%d",&N);
    for(i = 0; i < N; i++){
        printf("\nEnter l'element %d du tableau 1: ",i+1);
        scanf("%d",&T1[i]);
    }
    for(i = 0; i < N; i++){
        printf("\nEnter l'element %d du tableau 2: ",i+1);
        scanf("%d",&T2[i]);
    }
    B = 1;
    for(i = 0; i < N; i++){
        if (T1[i] != T2[i])
            B = 0;
    }
    if (B == 1)
        printf("Les tableau sont indentiques ");
    else
        printf("Les tableau ne sont pas indentiques ");
    return 0;
}


//Exercice 2 :
//a) Ecrire un programme qui teste si deux tableaux d'entiers qui ont la même taille sont identiques.
