/*
A tarefa aqui neste problema é ler uma expressão matemática na forma de dois números Racionais 
(numerador / denominador) e apresentar o resultado da operação. 
Cada operando ou operador é separado por um espaço em branco. 
A sequência de cada linha que contém a expressão a ser lida é: 
número, caractere, número, caractere, número, caractere, número. 
A resposta deverá ser apresentada e posteriormente simplificada. 
Deverá então ser apresentado o sinal de igualdade e em seguida a resposta simplificada. 
No caso de não ser possível uma simplificação, deve ser apresentada a mesma resposta após o sinal de igualdade.

Considerando N1 e D1 como numerador e denominador da primeira fração, 
segue a orientação de como deverá ser realizada cada uma das operações:
Soma: (N1*D2 + N2*D1) / (D1*D2)
Subtração: (N1*D2 - N2*D1) / (D1*D2)
Multiplicação: (N1*N2) / (D1*D2)
Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1)
Entrada
A entrada contem vários casos de teste. 
A primeira linha de cada caso de teste contem um inteiro N (1 ≤ N ≤ 1*104), 
indicando a quantidade de casos de teste que devem ser lidos logo a seguir. 
Cada caso de teste contém um valor racional X (1 ≤ X ≤ 1000), 
uma operação (-, +, * ou /) e outro valor racional Y (1 ≤ Y ≤ 1000).

Saída
A saída consiste em um valor racional, seguido de um sinal de igualdade e outro valor racional, 
que é a simplificação do primeiro valor. 
No caso do primeiro valor não poder ser simplificado, o mesmo deve ser repetido após o sinal de igualdade.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct racional
{
    int numerador;
    char operacaoRacional;
    int denominador;
} racional;

int main(){
    int casos;
    racional exp1, exp2;
    char operacao;
    struct racional r1, r2;

    scanf("%d", &casos);

    do
    {
        scanf("%d %c %d %c %d %c %d", 
            &exp1.numerador, &exp1.operacaoRacional,
            &exp1.denominador, &operacao,
            &exp2.numerador, &exp2.operacaoRacional,
            &exp2.denominador);

        // printf("%d %c %d %c %d %c %d\n", 
        //     exp1.numerador, exp1.operacaoRacional,
        //     exp1.denominador, operacao,
        //     exp2.numerador, exp2.operacaoRacional,
        //     exp2.denominador);

        switch (operacao)
        {
            case '+':
                //Soma: (N1*D2 + N2*D1) / (D1*D2)
                r1.numerador = exp1.numerador * exp2.denominador + exp2.numerador * exp1.denominador;
                r1.denominador = exp1.denominador * exp2.denominador;
                break;
            case '-':
                //Subtração: (N1*D2 - N2*D1) / (D1*D2)
                r1.numerador = exp1.numerador * exp2.denominador - exp2.numerador * exp1.denominador;
                r1.denominador = exp1.denominador * exp2.denominador;
                break; 
            case '*':
                //Multiplicação: (N1*N2) / (D1*D2)
                r1.numerador = exp1.numerador * exp2.numerador;
                r1.denominador = exp1.denominador * exp2.denominador;
                break;
            case '/':
                //Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1)
                r1.numerador = exp1.numerador * exp2.denominador;
                r1.denominador = exp2.numerador * exp1.denominador;
                break;                               
            default:
                break;
        }
        int divisor = 2;
        int maior = r1.numerador > r1.denominador ? r1.numerador : r1.denominador;
        r2 = r1;

        do
        {
            //printf("r2.numerador: %d -- r2.denominador: %d -- divisor: %d\n", r2.numerador, r2.denominador, divisor);

            if (r2.numerador % divisor == 0 && r2.denominador % divisor == 0)
            {
                r2.numerador /= divisor;
                r2.denominador /= divisor;
            }
            else
            {
                divisor++;
            }            
        } 
        while (divisor <= maior);
        
        printf("%d/%d = %d/%d\n", r1.numerador, r1.denominador, r2.numerador, r2.denominador);
        casos--;
    }
    while (casos > 0);

    return 0;
}