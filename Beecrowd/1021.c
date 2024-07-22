/*
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. 
A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2. 
As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    double valor;
    int quantidade;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int notasSacadas[] = {0, 0, 0, 0, 0, 0, 0};

    int moedas[] = {50, 25, 10, 5, 1};
    int moedasSacadas[] = {0, 0, 0, 0, 0};
    
    scanf("%lf", &valor);

    printf("NOTAS:\n");
    for (int i = 0; i < 7; i++)
    {
        notasSacadas[i] = (int)(valor / notas[i]);
        if (notasSacadas[i] > 0) {
            valor -= notas[i] * notasSacadas[i];
        }
        if(i < 6)
            printf("%d nota(s) de R$ %d.00\n", notasSacadas[i], notas[i]);
    }

    printf("MOEDAS:\n");
    int valorNotas = (int)valor;
    int valorMoedas = (valor - valorNotas) * 100;
    for (int i = 0; i < 5; i++)
    {
        moedasSacadas[i] = valorMoedas / moedas[i];

        if (moedasSacadas[i] > 0) {
             valorMoedas -= moedas[i] * moedasSacadas[i];
        }
        
        if(i == 0)
            printf("%d moeda(s) de R$ %d.00\n", notasSacadas[6], notas[6]);
   
        printf("%d moeda(s) de R$ %.2lf\n", moedasSacadas[i], (double)moedas[i]/100);   
    }  
    
    return 0;
}