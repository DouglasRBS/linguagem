#include <stdio.h>

int main(){
    int matriz [3] [3], i, j;

    printf ("\n Digite valor para matriz \n\n");
    for (i=0; i<3; i++)
    for (j=0; j<3; j++)
{
    printf("valor [%d][%d]=", i,j);
    scanf ("%d", &matriz[i][j]);
}

    printf("***");
    for (i=0;i<3; i++)
    for(j=0;j<3; j++)
    {
        printf("valor [%d] [%d]= %d\n", i, j,matriz [i] [j]);
    }
    }
