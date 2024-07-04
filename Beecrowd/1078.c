/*
Leia 1 valor inteiro N (2 < N < 1000). 
A seguir, mostre a tabuada de N:      
1 x N = N      
2 x N = 2N
...
10 x N = 10N

Entrada
A entrada contém um valor inteiro N (2 < N < 1000).

Saída
Imprima a tabuada de N, conforme o exemplo fornecido.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero;

    scanf("%d", &numero);

    printf("1 x %d = %d\n", numero, numero * 1);
    printf("2 x %d = %d\n", numero, numero * 2);
    printf("3 x %d = %d\n", numero, numero * 3);
    printf("4 x %d = %d\n", numero, numero * 4);
    printf("5 x %d = %d\n", numero, numero * 5);
    printf("6 x %d = %d\n", numero, numero * 6);
    printf("7 x %d = %d\n", numero, numero * 7);
    printf("8 x %d = %d\n", numero, numero * 8);
    printf("9 x %d = %d\n", numero, numero * 9);
    printf("10 x %d = %d", numero, numero * 10);

    printf("\n");

    return 0;
}