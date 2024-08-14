#include <stdio.h>

int main() {
    // Write C code here
    float m , mt , mth , mf;
    printf("Digite a nota:");
    scanf("%f" , &m );
    printf("Digite a nota:");
    scanf("%f" , &mt );
    printf("Digite a nota:");
    scanf("%f" , &mth );
    
    mf = (m + mt + mth) / 3 ;
    
    if ( mf >= 6 ){
        printf("Aprovado %.2f" , mf);
    }
    else {
        printf("Reprovado %.2f" , mf);
    }
    
 
    return 0;
}