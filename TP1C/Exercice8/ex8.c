#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    float s = 0,note, moy;
    while(note > 0)
    {
        printf("note %d : ",i);
        scanf("%f",&note);
        if(note < 0)
            break;
        s += note;
        i++;
    }
    //printf("%f",s);
    moy = s / (i - 1);
    printf("La note de ce %d notes est : %f", i - 1, moy);
    return 0;
}
