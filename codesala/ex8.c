#include <stdio.h>

int main() {
    // Write C code here
    int a ;
    printf("Digite o valor:");
    scanf("%i" , &a);

    if (( a % 2 == 0 ) && ( a % 3 == 0 )){
        printf( "%i" , a);
    }
    else{
        printf("Não é divisível por 3 e/ou 2 ");
    }

    return 0;
}