/*
Faça um programa que leia as notas referentes às duas avaliações de um aluno. 
Calcule e imprima a média semestral. 
Faça com que o algoritmo só aceite notas válidas 
(uma nota válida deve pertencer ao intervalo [0,10]). 
Cada nota deve ser validada separadamente.

Entrada
A entrada contém vários valores reais, positivos ou negativos. 
O programa deve ser encerrado quando forem lidas duas notas válidas.

Saída
Se uma nota inválida  for lida, deve ser impressa a mensagem "nota invalida".
Quando duas notas válidas forem lidas, deve ser impressa a mensagem "media = " 
seguido do valor do cálculo. O valor deve ser apresentado com duas casas após o ponto decimal.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float nota1, nota2, media;

    do {
        scanf("%f", &nota1);
        if(nota1 < 0 || nota1 > 10){
            printf("nota invalida\n");
        }
    } while (nota1 < 0 || nota1 > 10);

    do {
        scanf("%f", &nota2);
        if(nota2 < 0 || nota2 > 10){
            printf("nota invalida\n");
        }
    } while (nota2 < 0 || nota2 > 10);
    
    media = (nota1 + nota2) / 2;
    printf("media = %.2f\n", media);
}