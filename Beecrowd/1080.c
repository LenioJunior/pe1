/*
Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

Entrada
O arquivo de entrada contém 100 números inteiros, positivos e distintos.

Saída
Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int valores[100];
    int maior = -10000000;
    int posicao = -1;

    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &valores[i]);
        if (valores[i] > maior)
        {
            maior = valores[i];
            posicao = i+1;
        }        
    }

    printf("%d\n%d\n", maior, posicao);
}