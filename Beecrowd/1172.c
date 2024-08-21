/*
Faça um programa que leia um vetor X[10]. 
Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. 
Em seguida mostre o vetor X.

Entrada
A entrada contém 10 valores inteiros, podendo ser positivos ou negativos.

Saída
Para cada posição do vetor, escreva "X[i] = x", 
onde i é a posição do vetor e x é o valor armazenado naquela posição.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int casos = 10;
    int numeros[casos];

    for (int i = 0; i < casos; i++)
    {
        scanf("%d", &numeros[i]);
        if (numeros[i] <= 0)
            numeros[i] = 1;
    }

    for (int i = 0; i < casos; i++)
    {
        printf("X[%d] = %d\n", i, numeros[i]);
    }
}