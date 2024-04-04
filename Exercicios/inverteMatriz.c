#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int m1[2][3];
    int m2[3][2];

    int cont = 1;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++){
            m1[i][j] = cont++;
            printf("%d-%d: %d ", i, j, m1[i][j]);
        }
        printf("\n");
    }
    
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++){
            m2[j][i] = m1[i][j];
        }
        printf("\n");
    }

    printf("--- Invertida ---\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++){
            printf("%d-%d: %d ", i, j, m2[i][j]);
        }
        printf("\n");
    }
}