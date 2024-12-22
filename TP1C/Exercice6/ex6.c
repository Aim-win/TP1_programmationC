#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 39;

    if ((x % 3 == 0) && (x % 13 == 0))
        printf("Le nombre %d est divisible par 3 et 13 \n",x);
    else
        printf("Non %d n'est pas divisible par 3 et 13 \n",x);
    return 0;
}
