/*
Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. 
Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

Entrada
O arquivo de entrada contém um valor inteiro.

Saída
Imprima a saída conforme exemplo fornecido.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade, anos, meses, dias;
    scanf("%d", &idade);

    anos = idade / 365;
    if(anos > 0) {
        idade = idade - (anos * 365);
    }   
    
    meses  = idade / 30;
    if(meses > 0) {
        idade = idade - (meses * 30);
    }
    
    dias = idade;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

    return 0;
}