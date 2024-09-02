/*
Devido às constantes estiagens que aconteceram nos últimos tempos em algumas regiões do Brasil, 
o governo federal criou um órgão para a avaliação do consumo destas regiões 
com finalidade de verificar o comportamento da população na época de racionamento. 
Este órgão responsável irá pegar algumas cidades (por amostragem) 
e verificará como está sendo o consumo de cada uma das pessoas da cidade e o consumo médio de cada cidade por habitante.

Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤ 1*106), 
indicando a quantidade de imóveis. 
As N linhas contém um par de valores X (1 ≤ X ≤ 10) e Y (1 ≤ Y ≤ 200), 
indicando a quantidade de moradores de cada imóvel e o respectivo consumo total de cada imóvel (em m3). 
Com certeza, nenhuma residência consome mais do que 200 m3 por mês. 
O final da entrada é representado pelo número zero.

Saída
Para cada entrada, deve-se apresentar a mensagem “Cidade# n:”, 
onde n é o número da cidade seguindo a sequência (1, 2, 3, ...) 
e em seguida deve-se listar, por ordem ascendente de consumo, 
a quantidade de pessoas seguido de um hífen e o consumo destas pessoas, arredondando o valor para baixo. 
Na terceira linha da saída deve-se mostrar o consumo médio por pessoa da cidade, 
com 2 casas decimais sem arredondamento, considerando o consumo real total. 
Imprimir uma linha em branco entre dois casos de teste consecutivos. 
No fim da saída não deve haver uma linha em branco.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct cidade {
    int somaConsumo;
    double mediaConsumo;
    int totalMoradores;
};

struct imovel {
    int quantidadeMoradores;
    int consumoPorMorador;
};

int main(){

    int contador = 1;
    int casos = 0;

    do
    {
        scanf("%d", &casos);

        if (casos == 0)
            break;

        struct imovel imoveis[500];
        struct cidade cidade;
        cidade.mediaConsumo = cidade.somaConsumo = cidade.totalMoradores = 0;        
        int moradores = 0, consumo = 0;

        for (int i = 0; i < 500; i++)
            imoveis[i].quantidadeMoradores = 0;

        for (int i = 0; i < casos; i++)
        {
            scanf("%d %d", &moradores, &consumo);
            int index = consumo / moradores;
            imoveis[index].quantidadeMoradores += moradores;
            imoveis[index].consumoPorMorador = consumo / moradores;
            cidade.somaConsumo += consumo;
            cidade.totalMoradores += moradores;
        }
        cidade.mediaConsumo = floor(100 * (double)cidade.somaConsumo / cidade.totalMoradores) / 100;

        printf("Cidade# %d:\n", contador);

        for (int i = 0; i < 500; i++)
        {
            if (imoveis[i].quantidadeMoradores > 0)
            {
                printf("%d-%d ", imoveis[i].quantidadeMoradores, imoveis[i].consumoPorMorador);
            }
        }
        printf("\nConsumo medio: %.2lf m3.\n", cidade.mediaConsumo);

        if (contador > 1)
            printf("\n");
        
        contador++;

    } while (casos != 0);

    return 0;
}