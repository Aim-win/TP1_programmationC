#include <stdio.h>
#include <stdlib.h>

int main()
{
    float HT, TTC, RED = 0.02, TVA = 0.2;

    printf("Saisir le prix total hors tax : ");
    scanf("%f",&HT);
    if (HT >= 1500)
        HT -= HT*RED;
    TTC = HT + HT*TVA;
    printf("Vous avez %f en total ",TTC);

    return 0;
}
