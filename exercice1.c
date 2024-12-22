#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, max, min, s = 0, T[50];

    printf("Entrer la dimension du tableau :");
    scanf("%d",&N);
    for(i = 0; i < N; i++){
        printf("\nEnter l'element %d du tableau : ",i+1);
        scanf("%d",&T[i]);
    }
    for(i = 0; i < N; i++){
        s += T[i];
    }
    max = T[0];
    for(i = 0; i < N; i++){
        if (T[i] > max)
            max = T[i];
    }
    min = T[0];
    for(i = 0; i < N; i++){
        if (T[i] < min)
            min = T[i];
    }
    printf("La somme des elememt des tableau est : %d \n",s);
    printf("Le max est : %d \nLe min est : %d",max, min);


    return 0;
}
/*
Exercice 1
Ecrire un programme C qui lit la dimension N d'un tableau T du type int (dimension maximale : 50
composantes), remplit le tableau par des valeurs entrées au clavier et affiche le tableau puis calcul
la somme, le max, et le min de ses éléments.*/
