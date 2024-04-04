#include<stdio.h>
#include <stdlib.h>


int main ()
{
    int a[3][2];
    int b[2][3];
    int cont = 1;

    printf("Digite os valores para a matriz\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            a[i][j] = cont++;
            //scanf("%d", &a[i][j]);
            printf("%d ", a[i][j]);
        }
        printf("\n");           
    }   
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            b[j][i] = a[i][j];
        }       
    }
    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }


    return 0;
}

