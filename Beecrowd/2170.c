/*
Em um projeto de investimento, cujo o valor inicial do capital é de X, renderá, após um período um valor Y.
Deseja-se saber qual a Taxa Interna de Retorno do investimento, pois dessa forma poderá ser verificado o percentual dos juros.

Entrada
Existem vários projetos a serem analisados, e para cada projeto é dado o aporte de capital inicial (1 < X < 1020), e o seu retorno (X < Y < 1020).

Saída
Para cada projeto mostre o valor dos juros para cada aplicação. Mostre conforme o exemplo de saída.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int contador = 1;
    long double capital, retorno, resultado;
    
    while (scanf("%Lf", &capital) != EOF && scanf("%Lf", &retorno) != EOF)
    {
        resultado = ((retorno / capital) - 1) * 100;
        printf("Projeto %d:\nPercentual dos juros da aplicacao: %.2Lf %%\n\n", contador, resultado);
        contador++;
    }  

    return 0;
}