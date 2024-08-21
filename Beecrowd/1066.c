/*
Leia 5 valores Inteiros. 
A seguir mostre quantos valores digitados foram pares, 
quantos valores digitados foram ímpares, 
quantos valores digitados foram positivos e quantos valores digitados foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, 
não esquecendo o final de linha após cada uma.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define TAM 5

int main(){
    int v[TAM];
    int par = 0;
    int impar = 0;
    int positivo = 0;
    int negativo = 0;

    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &v[i]);
        v[i] % 2 == 0 ? par++ : impar++;

        if(v[i] > 0){
            positivo++;
        }
        else if(v[i] < 0){
            negativo++;
        }
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);
}