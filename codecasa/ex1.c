#include <stdio.h>

int main() {
    int A;
    printf("Digite o valor: ");
    scanf( "%f" , &A);
    
    if (A % 2 == 0) {
        printf("é par");
    }
    else{
        printf("é impar");
    }
    

    return 0;
}