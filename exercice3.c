#include <stdio.h>

int main()
{
    int N, i, j;
    int T1[10],NT[10];

    printf("Entrer la dimension du tableau :");
    scanf("%d",&N);
    for(i = 0; i < N; i++){
        printf("\nEnter l'element %d du tableau 1: ",i+1);
        scanf("%d",&T1[i]);
    }

    for(i = 0 ,j = 0; i < N, j < N; i++, j++){ 
            if (T1[i] == 0){
                i++;
                N--;
            }
            NT[j] = T1[i];
        }
    for(j = 0; j < N; j++){
        printf("l'element %d du tableau est : %d\n",j+1,NT[j]);
    }
    return 0;
}
