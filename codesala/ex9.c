#include <stdio.h>

int main() {
    // Write C code here
    int a ;
    printf("Digite o valor:");
    scanf("%i" , &a);

    if (( a % 4 == 0 ) || ( a % 5 == 0 )){
        printf( "%i" , a);
    }
    else{
        printf("Não é divisível por 4 ou 5 ");
    }

    return 0;
}