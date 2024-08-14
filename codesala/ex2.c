#include <stdio.h>

int main() {
    // Write C code here
    float m , mt , mf;
    printf("Digite a nota:");
    scanf("%f" , &m );
    printf("Digite a nota:");
    scanf("%f" , &mt );
    
    
    mf = (m + mt ) / 2 ;
    
    if ( mf >= 6 ){
        printf("Aprovado %.2f" , mf);
    }
    else {
        printf("Necessaŕio nota do exame\n");
        float ex, mfn;
        printf("Digite a nota:");
        scanf("%f" , &ex );
        mfn = (ex + mf) / 2 ;
        if ( mfn >= 5){
            printf("Aprovado %.2f" , mfn);
        }
        else{
        printf("Reprovado %.2f" , mfn);}
    }
    
 
    return 0;
