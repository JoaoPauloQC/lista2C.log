#include <stdio.h>

int main() {
    
    float sb , ht , sn, sh , he , adc , sf;
    printf("entre com o salario: ");
    scanf( "%f" , &sb );
    printf("entre com as horas trabalhadas: ");
    scanf( "%f" , &ht );
    if(sb < 800){
       sn = sb ;
    }
    else {
       if(( sb >= 800) && (sb <= 1600)){
           sn = sb - 0.08 * sb - 0.05 * sb;
       } 
       else{
           if ( sb > 1600){
               sn = sb - 0.15 * sb - 0.07 * sb; 
           }
           else{}
       }
    }

    sh = sb / 160;
    he = ht - 160;
    adc = 0.5 * he * sh;

    sf = adc + sn;
    printf("O salario liquido %f" , sf);

    return 0;
}