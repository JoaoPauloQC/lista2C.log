#include <stdio.h>

int main() {
    float a , b , c , x1 , xt;
    printf("Digite o valor A: ");
    scanf("%f", &a);
    printf("Digite o valor B: ");
    scanf("%f", &b);
    printf("Digite o valor C: ");
    scanf("%f", &c);

    if (a > 0) {
        x1 = ((-1 * b) + ( (b*b) - 4 * a * c )) / (2 * a);
        xt = ((-1 * b) - ( (b*b) - 4 * a * c )) / (2 * a);
        
        printf (" x1 é %f " , x1 , "/n");
       printf("x2 é %f" , xt);
    }
    else{
        printf(" A tem que ser maior que '1'");
    }

    return 0;
}