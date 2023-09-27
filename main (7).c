#include <stdio.h>
int main() {
    float soma,result,nota;
    int contador=1;
    soma=0;
    
    while(contador<=3) {
        printf("\tdigite nota%d,,,,", contador);
        scanf("%f", &nota);
        soma=soma+nota;
        result=soma/3;
        
        contador=contador+1;
    }
    printf("media é %.1f", result);
}
