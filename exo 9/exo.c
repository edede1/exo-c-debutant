#include <stdio.h>

int main() {

    int chiffres[5];
    int a, b, c, d, e;
    int f = a + b + c + d + e;
    float moyenne;

    printf("entrer 5 chiffre : \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    chiffres[0] = a;
    chiffres[1] = b;
    chiffres[2] = c;
    chiffres[3] = d;
    chiffres[4] = e;

    f = a + b + c + d + e;
    moyenne = (float)f / 5.0;
    printf("%d \n", f);
    printf("La moyenne des chiffres est : %.2f \n", moyenne);

    return 0;
    
}