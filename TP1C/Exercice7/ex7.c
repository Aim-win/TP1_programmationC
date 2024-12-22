#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr;
    printf("Saisir un nombre [1...7]: ");
    scanf("%d",&nbr);

    while (nbr < 1 || nbr > 7){
        printf("Resaisir un nombre [1...7]: ");
        scanf("%d",&nbr);
    }
    printf("Saisie correcte, Merci");
    return 0;
}
