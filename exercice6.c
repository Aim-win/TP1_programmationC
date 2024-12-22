#include <stdio.h>
//exercice 6
float resultat;
float   calcule(float a, float b, char c){

    if(c == '-')
        resultat = a - b;
    else if(c == '*')
        resultat = a * b;
    else if(c == '/')
        resultat = a / b;
    else
        resultat = a + b;
    return resultat;

}

int main()
{
    float a, b;
    printf("Donnez deux nombres reels : ");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("Leur    somme est   :       %f\n",calcule(a,b,'+'));
    printf("Leur    differance  est     :   %f\n",calcule(a,b,'-'));
    printf("Leur    produit est :       %f\n",calcule(a,b,'*'));
    printf("Leur    quotient    est     :   %f\n",calcule(a,b,'/'));

    return 0;
}

