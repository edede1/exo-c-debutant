#include <stdio.h>

int sommeEntiers(){
    int a = 1;

    for ( a = 0; a < 101; a++)
    {
        printf("%d\n", a);
    }
    
}

int main(){
    sommeEntiers(1);

    for (int i = 0; i < 20; i++)
    {
        sommeEntiers(3);
    }
    

}