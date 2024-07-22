/*
A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:

Salário	Percentual de Reajuste
0 - 400.00              15%
400.01 - 800.00         12%
800.01 - 1200.00        10%
1200.01 - 2000.00       7%
Acima de 2000.00        4%

Leia o salário do funcionário e calcule e mostre o novo salário, 
bem como o valor de reajuste ganho e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste 
(ambos devem ser apresentados com 2 casas decimais) e o percentual de reajuste ganho, conforme exemplo abaixo.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    double salario, novoSalario, reajusteValor, reajustePercentual;
    
    scanf("%lf", &salario);

    if (salario <= 400) {
        reajustePercentual = 15;
    } 
    else if (salario <= 800) {
        reajustePercentual = 12;
    }
    else if (salario <= 1200) {
        reajustePercentual = 10;
    }
    else if (salario <= 2000) {
        reajustePercentual = 7;
    }
    else {
        reajustePercentual = 4;
    }

    reajusteValor = salario * reajustePercentual / 100;
    novoSalario = salario + reajusteValor;

    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", reajusteValor);
    printf("Em percentual: %.0f %%\n", reajustePercentual);

    return 0;
}