#include <stdio.h>

int main() {
    // Write C code here
    float m , mt, v ;
    printf("Digite o valor um:");
    scanf("%f" , &m );
    printf("Digite o valor dois:");
    scanf("%f" , &mt );
    
    if ( m >= mt){
        v = m - mt;
        printf("%f" , v);
    }
    else{
        v = mt - m;
        printf("%f" , v);
    }
    
}