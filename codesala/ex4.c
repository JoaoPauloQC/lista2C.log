#include <stdio.h>

int main() {
    float A , B , C ;
    printf("Digite o valor A: ");
    scanf("%f", &A);
    printf("Digite o valor B: ");
    scanf("%f", &B);
    printf("Digite o valor C: ");
    scanf("%f", &C);

    if (( A < (B + C)) && ( B < (C+A)) && (C < (B + A))){
        if ((A == B ) && ( B == C )){
            printf("Equilatero");
        }
        else {
            if (( A == B ) && ( B != C) || (A == C) && ( B != A ) || ( B == C ) && ( C != A )) {
                printf("Isósceles");
            }
            else {
                printf("Escaleno");
            }
        }
        
    }
    else {
        printf("error");
    }

    return 0;
}