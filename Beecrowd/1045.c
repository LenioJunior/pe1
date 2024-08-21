/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, 
de modo que o lado A representa o maior dos 3 lados. 
A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, 
sempre escrevendo uma mensagem adequada:

se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída
Imprima todas as classificações do triângulo especificado na entrada.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    double lados[3];
    char quadranteX;

    for (int i = 0; i < 3; i++)
    {
        scanf("%lf", &lados[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = i; j < 3; j++)
        {
            if(lados[i] < lados[j]){
                double temp = lados[i];
                lados[i] = lados[j];
                lados[j] = temp;
            }
        }
    }
    
    double A = lados[0], B = lados[1], C = lados[2];
    
    if (A >= (B+C))
        printf("NAO FORMA TRIANGULO\n");
    else {
        if (pow(A, 2) == pow(B, 2) + pow(C, 2))
            printf("TRIANGULO RETANGULO\n");

        if (pow(A, 2) > pow(B, 2) + pow(C, 2))
            printf("TRIANGULO OBTUSANGULO\n");

        if (pow(A, 2) < pow(B, 2) + pow(C, 2))
            printf("TRIANGULO ACUTANGULO\n");

        if (A == B && B == C && C == A)
            printf("TRIANGULO EQUILATERO\n");
        else if (A == B || B == C || C == A)
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}