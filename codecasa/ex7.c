#include <stdio.h>

int main() {
    // Write C code here
    int m;
    
    
    printf("Entre com o número: ");
    scanf( "%i" , &m );
    
    switch (m){
        case 1:
        printf("Engenharia");
        break;
        case 2:
        printf("Edificações");
        break;
        case 3:
        printf("Sistemas Elétricos");
        break;
        case 4:
        printf("Turismo");
        break;
        case 5:
        printf("Análise de Sistemas");
        break;
        default:
        printf("inválido");
        break;
    }
    return 0;
}