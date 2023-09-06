#include <stdio.h>
int main(){
    int dado=10;
    printf("dado antes do incremento%d\n",dado);
    dado++;
    printf("dado depois do incremento %d\n",dado);
    dado--;
    printf("depois do incremetno %d\n",dado);
    dado+=3;
    printf("depois do incremetno em 3 unidades %d\n", dado);
    dado-=2;
    printf("depois do decremento em 2 unidades %d\n",dado);
    dado*=10;
    printf("depois de multiplicar por 10 %d\n",dado);
}