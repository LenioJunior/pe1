/*
Ler um valor N. Calcular e escrever seu respectivo fatorial. 
Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.

Entrada
A entrada contém um valor inteiro N (0 < N < 13).

Saída
A saída contém um valor inteiro, correspondente ao fatorial de N.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero, fatorial;

    scanf("%d", &numero);
    fatorial = numero;

    for (int i = numero - 1; i > 0; i--){
        fatorial *= (numero - i);
    }

    printf("%d\n", fatorial);
}