#include <stdio.h>
#include<math.h>

int main()
{
    int a = 10,
    b = 15, c = 1;
    float Delta;
    if (a == 0)
        printf("Cette equation n'est pas de 2 eme degree");
    else {
        Delta = pow(b,2) - 4*a*c;
        printf("%f ",sqrt(Delta));
        if (Delta > 0)
            printf("L'equation admet deux racines: %f et %f ",(-b+sqrt(Delta))/(2*a), (-b-sqrt(Delta))/(2*a));
        else if(Delta == 0)
            printf("L'equation admet une seule racine : %f",-b/(2*a));
        else
            printf("L'equation n 'admet pas de solution reel");
    }
    return 0;
}
