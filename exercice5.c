#include <stdio.h>
//Exercice5:

    int i;
    void f1(void){
        printf("Bonjour");
    }
    void f2(int n){
        for(i = 0; i < n; i++)
        {
            f1();
            printf("\n");
        }
    }

    int f3(int nbr){
        f2(nbr);
        return 0;
    }

    int main(){
        printf("---------------le debut de la fonction f1 --------------------\n");
        f1();
        printf("\n---------------le debut de la fonction f2 --------------------\n");
        f2(3);
        printf("\n---------------le debut de la fonction f3 --------------------\n");
        f3(3);
    }
#include <stdio.h>

    int i;
    void f1(void){
        printf("Bonjour");
    }
    void f2(int n){
        for(i = 0; i < n; i++)
        {
            f1();
            printf("\n");
        }
    }

    int f3(int nbr){
        f2(nbr);
        return 0;
    }

    int main(){
        printf("---------------le debut de la fonction f1 --------------------\n");
        f1();
        printf("\n---------------le debut de la fonction f2 --------------------\n");
        f2(3);
        printf("\n---------------le debut de la fonction f3 --------------------\n");
        f3(3);
    }
