#include<stdio.h>

// Determinante

int main(){
    int d1 = 3;
    int d2 = 3;
    int nd2 = d2 + 2;
    float determinante = 1;

    int lin, col;

    int matriz[d1][d2];
    int calc[d1][nd2];
    int cont = 1;

    for (lin = 0; lin < d1; lin++)
    {
        for (col = 0; col < d2; col++)
        {
            matriz[lin][col] = cont++;
            calc[lin][col] = matriz[lin][col];
            if(col <= 1){
                calc[lin][d2 + col] = matriz[lin][col];
            }            
        }  
    }

    for (lin = 0; lin < d1; lin++)
    {
        for (col = 0; col < nd2; col++)
        {
            printf("%d ", calc[lin][col]);
        }
        printf("\n");
    }
    
    for (col = 0; col < nd2; col++)
    {
        for (lin = 0; lin < d1; lin++)
        {
            determinante *=  calc[lin][col];
            printf("Det: %d-%d\n", lin + col, lin + col);
        }
        printf(" + \n");
    }
    

    //printf("O determinante da matriz %d x %d e: %f", determinante);

    return 0;
}