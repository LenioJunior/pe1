/*
Exercício 3: Calculadora de Média e Aprovação
Descrição:
Escreva um programa em C que leia as notas de três provas de um aluno e calcule a média aritmética. 
O programa deve então determinar se o aluno foi aprovado, reprovado ou está de recuperação com base na média calculada.

Requisitos:
Use printf e scanf para entrada e saída de dados.
Utilize a estrutura if-else para determinar a situação do aluno.
Considere as seguintes regras:
Aprovado se a média é maior ou igual a 7.0.
Recuperação se a média é maior ou igual a 5.0 e menor que 7.0.
Reprovado se a média é menor que 5.0. 

Exemplo de Entrada e Saída:
Digite a nota da primeira prova: 6.5
Digite a nota da segunda prova: 7.0
Digite a nota da terceira prova: 8.0
Média: 7.17
Situação: Aprovado
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Digite a nota da primeira prova:\n");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova:\n");
    scanf("%f", &nota2);

    printf("Digite a nota da terceira prova:\n");
    scanf("%f", &nota3);

    //Aprovado se a média é maior ou igual a 7.0.
    //Recuperação se a média é maior ou igual a 5.0 e menor que 7.0.
    //Reprovado se a média é menor que 5.0. 
    media = (nota1 + nota2 + nota3) / 3;

    if(media >= 7.0){
        printf("Aprovado!\n");
    }
    else if (media >= 5.0 && media < 7.0){
        printf("Recuperacao!\n");
    }
    else {
        printf("Reprovado!\n");
    }    
}