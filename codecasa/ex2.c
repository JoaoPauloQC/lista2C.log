#include <stdio.h>

int main() {
    int A , B , sm ;
    A = 40;
    printf("Digite o valor B: ");
    scanf("%i" , &B);
    
    if ( A > B) {
        sm = (A - B);
        printf( "%i" , sm);
    }
    else {
        sm = (B - A);
        printf("%i", sm);
    }
}