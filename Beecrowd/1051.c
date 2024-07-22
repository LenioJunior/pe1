/*
Em um país imaginário denominado Lisarb, todos os habitantes ficam felizes em pagar seus impostos, 
pois sabem que nele não existem políticos corruptos e os recursos arrecadados são utilizados em 
benefício da população, sem qualquer desvio. A moeda deste país é o Rombus, cujo símbolo é o R$.

Leia um valor com duas casas decimais, equivalente ao salário de uma pessoa de Lisarb. 
Em seguida, calcule e mostre o valor que esta pessoa deve pagar de Imposto de Renda, segundo a tabela abaixo.

de 0 a 2000         => Isento
de 2000.01 até 3000 => 8 %
de 3000.01 até 4500 => 18 %
acima de 4500       => 28 % 

Lembre que, se o salário for R$ 3002.00, a taxa que incide é de 8% apenas sobre R$ 1000.00, 
pois a faixa de salário que fica de R$ 0.00 até R$ 2000.00 é isenta de Imposto de Renda. 
No exemplo fornecido (abaixo), a taxa é de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00, 
o que resulta em R$ 80.36 no total. O valor deve ser impresso com duas casas decimais.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima o texto "R$" seguido de um espaço e do valor total devido de Imposto de Renda, 
com duas casas após o ponto. Se o valor de entrada for menor ou igual a 2000, 
deverá ser impressa a mensagem "Isento".
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    double salario, faixaSalario, impostoValor = 0;
    
    scanf("%lf", &salario);
    
    faixaSalario = salario;

    if (salario > 2000) {
        faixaSalario -= 2000;
        if (faixaSalario > 1000) {
            impostoValor += 1000 * 8 / 100;
        } else {
            impostoValor += faixaSalario * 8 / 100;
        }
        
        if (salario > 3000) {
            faixaSalario -= 1000;
            if (faixaSalario > 1500) {
                impostoValor += 1500 * 18 / 100;
            } else {
                impostoValor += faixaSalario * 18 / 100;
            }

            if (salario > 4500) {
            faixaSalario -= 1500;
            if (faixaSalario > 0) {
                impostoValor += faixaSalario * 28 / 100;
            }
        }
        }
    }
    
    if (impostoValor == 0) {
        printf("Isento\n");
    } else {
        printf("R$ %.2f\n", impostoValor);
    }

    return 0;
}