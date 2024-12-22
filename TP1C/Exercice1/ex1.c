#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("La taille d'une variable de type int est : %d\n",sizeof(int));
    printf("La taille d'une variable de type short int est : %d\n",sizeof(short int));
    printf("La taille d'une variable de type long int est : %d\n",sizeof(long int));
    printf("La taille d'une variable de type float est : %d\n",sizeof(float));
    printf("La taille d'une variable de type double est : %d\n",sizeof(double));
    printf("La taille d'une variable de type long double est : %d\n",sizeof(long double));
    printf("La taille d'une variable de type char est : %d\n",sizeof(char));

    return 0;
}
