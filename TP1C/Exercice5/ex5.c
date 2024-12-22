#include <stdio.h>

int main()
{
    int Jour, Mois, Annee;

    printf("Entrer une date (ex: 7/7/2017) : ");
    scanf("%d/%d/%d", &Jour, &Mois, &Annee);
    //printf("Aujourdui c'est le : %d/%d/%d\n",Jour, Mois, Annee);

    switch(Mois){
    case 1:
        printf("%d-Janvier-%d", Jour,Annee);
        break;
    case 2:
        printf("%d-Fevrier-%d", Jour,Annee);
        break;
    case 3:
        printf("%d-Mars-%d", Jour,Annee);
        break;
    case 4:
        printf("%d-Avril-%d", Jour,Annee);
        break;
    case 5:
        printf("%d-Mai-%d", Jour,Annee);
        break;
    case 6:
        printf("%d-Juin-%d", Jour,Annee);
        break;
    case 7:
        printf("%d-Juillet-%d", Jour,Annee);
        break;
    case 8:
        printf("%d-Aout-%d", Jour,Annee);
        break;
    case 9:
        printf("%d-Septembre-%d", Jour,Annee);
        break;
    case 10:
        printf("%d-Octobre-%d", Jour,Annee);
        break;
    case 11:
        printf("%d-Novembre-%d", Jour,Annee);
        break;
    case 12:
        printf("%d-Decembre-%d", Jour,Annee);
        break;
    }

    return 0;
}
