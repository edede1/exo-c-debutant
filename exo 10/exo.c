#include <stdio.h>

int main(){

    int tab[10];

    printf("veuillez entrer 10 nombre : ");
    for (int i = 0; i < 10; i++)
    {
        printf("Entree %d : ", i + 1);
         scanf("%s", tab);
    }
    

    printf("votre nombre et : %s", tab);
    return 0;
}