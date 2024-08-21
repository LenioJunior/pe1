/*
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada
O arquivo de entrada contém dois valores inteiros.

Saída
O programa deve imprimir um valor inteiro. 
Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada 
que deverá caber em um inteiro.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int X, Y, Temp, soma;
    scanf("%d %d", &X, &Y);

    if(Y < X){
        Temp = X;
        X = Y;
        Y = Temp;
    }

    for (int i = X + 1; i < Y; i++)
    {
        if(i % 2 == 1 || i % 2 == -1){            
            soma += i;
        }
    }

    printf("%d\n", soma);
}