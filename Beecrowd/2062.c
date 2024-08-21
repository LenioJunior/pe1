/*
Mariazinha criou um exercício para as suas irmãs Paula e Marta: 
ela distribui um texto e pede que ambas corrijam este texto, 
sabendo que apenas as palavras OBI e URI podem estar escritas de forma errada, 
e o erro pode estar apenas na última letra.

Sua tarefa aqui é automatizar este processo, ou seja, 
criar um programa que faça a correção dos textos distribuídos pela Mariazinha 
para que ela possa conferir as correções de suas irmãs sem muito trabalho.

Note que se "OB" ou "UR" forem o início ou parte de uma palavra maior, como por exemplo "OBOS" ou "URAT"), 
estas palavras não devem ser alteradas.

Entrada
A entrada contém duas linhas. A primeira linha contém um valor inteiro N (1 < N < 10000) que indica a quantidade de palavras do texto. 
A segunda linha contém as palavras do texto, cada uma com o máximo de 20 caracteres ('A'-'Z'), e com no mínimo, uma letra ('A'-'Z').

Saída
Seu programa deverá apresentar o texto que foi distribuído por Mariazinha corrigido, segundo os critérios acima estabelecidos.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char palavra[100];
    int palavras;

    scanf("%d ", &palavras);
    
    for (int i = 0; i < palavras; i++)
    {
        scanf("%s", palavra);
        int len = strlen(palavra);

        if (i != 0)
            printf(" ");

        if (len == 3 && palavra[0] == 'O' && palavra[1] == 'B')
            printf("OBI");
        else if (len == 3 && palavra[0] == 'U' && palavra[1] == 'R')
            printf("URI");
        else
            printf("%s", palavra);
    }
    printf("\n");
}