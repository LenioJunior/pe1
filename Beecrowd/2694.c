/*
Joãozinho tem que ajudar seu pai. 
Um relatório específico com alguns números está saindo com caracteres indesejáveis no meio. 
A ideia é apenas somar os 3 valores que aparecem em cada linha sempre na mesma posição, 
ignorando as letras e apresentar esta soma. Não existem espaços em branco na linha.

Entrada
A primeira linha de entrada contém um inteiro N (N < 100000). 
Seguem N linhas com exatos 14 caracteres que devem ser lidas e delas extraídos e somados os três números existentes.

Saída
Para cada linha de entrada, seu programa deve apresentar um valor numérico inteiro, 
que é a soma dos 3 números existentes na linha.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int casos = 16;
    int repeticoes;
    char conteudo[casos];

    char n1[3];
    char n2[5];
    char n3[3];

    scanf("%d ", &repeticoes);

    for(int cont = 0; cont < repeticoes; cont++)
    {        
        fgets(conteudo, casos, stdin);

        n1[0] = conteudo[2];
        n1[1] = conteudo[3];
        n1[2] = '\0';

        n2[0] = conteudo[5];
        n2[1] = conteudo[6];
        n2[2] = conteudo[7];
        n2[3] = '\0';

        n3[0] = conteudo[11];
        n3[1] = conteudo[12];
        n3[2] = '\0';

        int num1 = atoi(n1);
        int num2 = atoi(n2);
        int num3 = atoi(n3);

        printf("%d\n", num1 + num2 + num3);
    }
}