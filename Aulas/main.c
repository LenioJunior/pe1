#include<stdio.h>
#include<stdlib.h>

int main() {
    int num1, num2, soma, subtracao, multiplicacao, divisao;

    printf("Informe o primeiro numero:");
    scanf("%d", &num1);

    printf("Informe o segundo numero:");
    scanf("%d", &num2); 

    printf("Informe os dois numeros:");
    scanf("%d %d", &num1, &num2); 

    // Estou realizando a soma de num1 com num2
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    // + soma
    // - subtracao
    // * multiplicacao
    // / divisão

    printf("Vc digitou os nums %d e %d\n", num1, num2);
    printf("Resultados:\nSoma: %d\nSubtracao: %d\nMultiplicacao: %d\n Divisao: %d\n",
            soma, subtracao, multiplicacao, divisao);
}