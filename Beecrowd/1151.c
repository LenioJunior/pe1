/*
A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. 
Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. 
Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 46).

Saída
Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. 
Não deve haver espaço após o último valor.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero, old = 0, new = 0;

    scanf("%d", &numero);
    for (int cont = 0; cont < numero; cont++)
    {
        printf("%d", new);

        int tmp = new;
        new = new + old;
        old = tmp; 
        
        if (cont == 0)
            new = 1;

        if (cont < numero - 1)
            printf(" ");
    }
    
    printf("\n");
}