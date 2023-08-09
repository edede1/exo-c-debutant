#include <stdio.h>

int a = 5;

int b = 10;

char c = 'c';
int main(){

    if (a < b)
        {
            printf("le plus grand est %d: ", b);
        }
    else{
        printf("sinon il est plus petit");
    }

    if (c)
    {
        printf("%d", c);
    }
    
}