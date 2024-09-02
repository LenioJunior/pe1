/*
Em uma séria tentativa de reduzir a fila de desempregados, 
o novo Partido Nacional Trabalhista dos Rinocerontes Verdes decidiu uma estratégia pública. 
Todos os dias, todos os candidatos desempregados serão colocados em um grande círculo, voltados para dentro. 
Alguém é escolhido arbitrariamente como número 1, e os outros são numerados no sentido horário até N 
(os quais estarão à esquerda do 1°). 
Partindo do 1° e movendo-se no sentido horário, 
um contador oficial do laboratório conta k posições e retira um candidato, 
enquanto outro oficial começa a partir de N e se move no sentido anti-horário, 
contando m posições e retirando outro candidato. 
Os dois que são escolhidos são então enviados como estagiários para a reciclagem 
e se ambos os funcionários escolherem a mesma pessoa, ela (ele) é enviado para se tornar um político. 
Cada funcionário, em seguida, começa a contar novamente com a pessoa próxima disponível e o processo continua até que não reste ninguém. 
Note-se que as duas vítimas (desculpe, estagiários) deixam o anel ao mesmo tempo, 
por isso é possível que um funcionário conte a pessoa já selecionado pelo outro funcionário.

Entrada
Escreva um programa que leia sucessivamente três números (N, k e m; k, m > 0, 0 < N < 20) 
e determina a ordem no qual os candidatos são retirados para treinamento . 
Cada conjunto de três números estará em uma linha distinta e o final da entrada de dados é sinalizado por três zeros (0 0 0).

Saída
Para cada conjunto de três números de entrada, imprima uma linha de números especificando a ordem na qual as pessoas são escolhidas. 
Cada número pode ter até 3 dígitos. Liste o par escolhido partindo da pessoa escolhida pelo contador do sentido horário. 
Os pares sucessivos são separados por vírgula (mas não deverá haver vírgula após o último escolhido).
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct roda {
    int numero;
    struct roda * ant;
    struct roda * prox;
};

int main(){

    int N, dir, esq;

    //do
    {
        //scanf("%d %d %d", &N, &dir, &esq);
        N = 10;
        dir = 4;
        esq = 3;

        // if(N == 0 && dir == 0 && esq == 0)
        //     break;

        struct roda roda[N];

        for (int i = 0; i < N; i++)
        {
            roda[i].numero = i + 1;

            if (i > 0)
            {
                roda[i - 1].prox = &roda[i];
                roda[i].ant = &roda[i - 1];
            }
        }
        roda[N - 1].prox = &roda[0];
        roda[0].ant = &roda[N - 1];

        for (int i = 0; i < N; i++)
            printf("%d ", roda[i].numero);

        printf("\n");
    } 
    //while (1);

    return 0;
}