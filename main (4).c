#include <stdio.h>
int main(){
    float salario, gastos;
    
    printf("informe o salario recebido:R$");
    scanf("%f",&salario);
    
    printf("informe o total de gastos:R$");
    scanf("%f", &gastos);
    
    if(gastos<=salario){
        printf("gasto dentro do orçamento.\n");
        
    }else{
        printf("orçamentos estourado.\n");
    }
    return 0;
        
    }
    