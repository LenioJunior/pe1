/*
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, 
e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), 
convertido para horas:minutos:segundos, conforme exemplo fornecido.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int duracao;
    int horas, minutos, segundos;
    scanf("%d", &duracao);
    
    horas = duracao / 60 / 60;
    if(horas > 0) {
        duracao = duracao - (horas * 60 * 60);
    }   
    
    minutos  = duracao / 60;
    if(minutos > 0) {
        duracao = duracao - (minutos * 60);
    }
    
    segundos = duracao;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}