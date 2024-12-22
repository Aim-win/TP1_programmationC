#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, nbr,occ , i, T1[100];

    printf("Entrer la dimension du tableau :");
    scanf("%d",&N);
    for(i = 0; i < N; i++){
        printf("\nEnter l'element %d du tableau 1: ",i+1);
        scanf("%d",&T1[i]);
    }
    printf("Entrer un nombre que vous souhaiter savoir son nbr d'occurences : ");
    scanf("%d",&nbr);

    occ = 0;
    for(i = 0; i < N; i++){
        if (T1[i] == nbr)
            occ += 1;
    }
    printf("%d",occ);
    return 0;
}
