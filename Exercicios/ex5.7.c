#include<stdio.h>

void printArray(int linhas, int colunas, int array[linhas][colunas], char * message){
    int cont = 1;
    
    printf("%s\n", message);
    for (int lin = 0; lin < linhas; lin++)
    {
        for (int col = 0; col < colunas; col++)
        {
            array[lin][col] = cont++;
            printf("%d ", array[lin][col]);
        }
        printf("\n");
    }
}

void multiplicacao(int linhasA, int colunasA, int linhasB, int colunasB, int A[linhasA][colunasA], int B[linhasB][colunasB], int resultado[linhasA][colunasB], char * message){
    
    printf("%s\n", message);
    for (int linA = 0; linA < linhasA; linA++)
    {
        for (int colB = 0; colB < colunasB; colB++)   
        {
            resultado[linA][colB] = 0;
            for (int colA_linB = 0; colA_linB < linhasB; colA_linB++)
            {                
                resultado[linA][colB] += A[linA][colA_linB] * B[colA_linB][colB];
                printf("%d-%d [%d] * %d-%d [%d] | ", linA, colA_linB, A[linA][colA_linB], colA_linB, colB, B[colA_linB][colB]);
            }
            printf("= %d\n", resultado[linA][colB]);
        }
    }
}

int main(){

    int num_linA = 3;
    int num_colA = 2;

    int num_linB = 2;
    int num_colB = 3;

    int A[num_linA][num_colA];
    int B[num_linB][num_colB];

    int res[num_linA][num_colB];

    printArray(num_linA, num_colA, A, "Array A");
    printArray(num_linB, num_colB, B, "Array B");
    
    multiplicacao(num_linA, num_colA, num_linB, num_colB, A, B, res, "Multiplicacao\n");

    return 0;
}