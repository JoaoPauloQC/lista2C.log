#include <stdio.h>

int main() {
    // Write C code here
    float a , b;
    printf("Digite o valor:");
    scanf("%f" , &a);

    if ( a >= 0 ){
        printf( "%f" , a);
    }
    else{
        b = a * -1 ;
        printf("%f" , b );
    }

    return 0;
}