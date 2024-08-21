/*
Exercício 2: Classificação de Triângulos
Descrição:
Escreva um programa em C que leia três lados de um triângulo 
e determine se os lados formam um triângulo válido. 
Se for válido, o programa deve identificar se o triângulo é equilátero, 
isósceles ou escaleno.

Requisitos:
Use printf e scanf para entrada e saída de dados.
Utilize a estrutura if-else para verificar a validade do triângulo e determinar seu tipo.
Um triângulo é válido se a soma de dois lados é sempre maior que o terceiro lado.

Exemplo de Entrada e Saída:
Digite o tamanho do primeiro lado: 5 
Digite o tamanho do segundo lado: 5 
Digite o tamanho do terceiro lado: 5 
O triângulo é equilátero.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float lado1, lado2, lado3;

    printf("Digite o tamanho do primeiro lado:\n");
    scanf("%f", &lado1);

    printf("Digite o tamanho do segundo lado:\n");
    scanf("%f", &lado2);

    printf("Digite o tamanho do terceiro lado:\n");
    scanf("%f", &lado3);

    //É válido se a soma de dois lados é sempre maior que o terceiro lado
    if(lado1 + lado2 < lado3 || lado1 + lado3 < lado2 || lado2 + lado3 < lado1){
        printf("Nao eh um triangulo valido!\n");
    }
    else {
        if (lado1 == lado2 && lado2 == lado3){
            printf("O triangulo e equilatero.\n");
        }
        else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
            printf("O triangulo e isosceles.\n");
        } 
        else {
            printf("O triangulo e escaleno.\n");
        }
    }    
}