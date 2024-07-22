/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. 
A seguir, calcule e mostre o valor da conta a pagar.

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código 
e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, 
com 2 casas após o ponto decimal.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    double valor;
    int codigo, quantidade;
    
    scanf("%d %d", &codigo, &quantidade);

    switch (codigo)
    {
    case 1:
        valor = 4.0;
        break;
    case 2:
        valor = 4.5;
        break;
    case 3:
        valor = 5.0;
        break;
    case 4:
        valor = 2.0;
        break;
    case 5:
        valor = 1.5;
        break;
    default:
        break;
    }
    
    printf("Total: R$ %.2lf\n", valor * quantidade);

    return 0;
}