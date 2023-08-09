#include <stdio.h>
#include <math.h>






int tableDeMultiplication(int nb){
   for ( int a = 0; a < 11; a++)
   {
    printf("\n %d x %d = %d ", a, nb,  a*nb);
    
   }
   
}
int main(){
 tableDeMultiplication(2);

 for ( int i = 2; i < 6; i++)
 {
    tableDeMultiplication(i);
 }
 
 
}