#include <stdio.h>

int main() {
    int x, y , z ;
    printf("Digite o valor : ");
    scanf("%i" , &x);
    printf("Digite o valor : ");
    scanf("%i" , &y);
    printf("Digite o valor : ");
    scanf("%i" , &z);
    
    
    if (( x >= y ) && ( y >= z )){
        printf("%i , %i , %i" , z , y ,x);
        
    }
    else {
        if ((x >= z ) && ( z >= y)) {
             printf("%i , %i , %i" , y , z , x);
        }
        else {
            if ((y >= x ) && ( x >= z)) {
             printf("%i , %i , %i" , z , x , y);
            }
            else {
            if ((y >= z ) && ( z >= x)) {
             printf("%i , %i , %i" , x , z , y ); 
                
            }
             else {
            if ((z >= y ) && ( y >= x)) {
             printf("%i , %i , %i" , x , y , z); 
                
            }
             else {
            if ((z >= x ) && ( x >= y)) {
             printf("%i , %i , %i" , y , x , z); }
             else { 
              printf("error")  ; 
             }
             
    }
}}}}} 