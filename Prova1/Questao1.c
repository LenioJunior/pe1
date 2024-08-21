/*
Exercício 1: Calculadora Simples
Descrição:
Escreva um programa em C que funcione como uma calculadora simples. 
O programa deve solicitar ao usuário dois números e uma operação 
(adição, subtração, multiplicação ou divisão) e exibir o resultado da operação.

Requisitos:
Use printf e scanf para entrada e saída de dados.

Utilize a estrutura switch-case para escolher a operação.
Garanta que a divisão por zero seja tratada corretamente, exibindo uma mensagem de erro.

Exemplo de Entrada e Saída:
Digite o primeiro número: 10 
Digite o segundo número: 5 
Escolha a operação (+, -, *, /): / 
Resultado: 2.00
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float num1, num2;
    char op;

    printf("Digite o primeiro número:\n");
    scanf("%f", &num1);

    printf("Digite o segundo número:\n");
    scanf("%f", &num2);

    printf("Escolha a operação (+, -, *, /)\n");
    scanf("%c", &op);

    switch (op)
    {
        case '+':
            printf("Resultado: %f\n", num1 + num2);
            break;   
        case '-':
            printf("Resultado: %f\n", num1 - num2);
            break;        
        case '*':
            printf("Resultado: %f\n", num1 * num2);
            break;        
        case '/':
            if(num2 == 0){
                printf("Erro: Divisao por zero.\n");
                break;
            }            
            printf("Resultado: %f\n", num1 / num2);
            break;
        default:
            break;
    }
}