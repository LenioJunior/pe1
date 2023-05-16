/*
    Exercício 4.15: Escreva um programa que preencha dois arrays de números inteiros de
    5 posições com valores fornecidos pelo usuário. Um terceiro array deve ser preenchido,
    contendo a intersecção dos elementos contidos nos dois primeiros arrays, ou seja, os
    valores que são comuns aos dois. Nos dois arrays fornecidos, pode haver repetição
    de elementos, mas essa repetição não deve ser refletida no array de intersecção. Por
    fim, o programa deve imprimir o array que contém os valores comuns aos dois arrays
    fornecidos..
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<locale.h>

#define TAM 5

int main(){
    int array1[TAM], array2[TAM], inter[TAM], contador = 0;
    
    setlocale(LC_ALL, "Portuguese");
    wprintf(L"Forneça os valores do primeiro array:\n");
    for (int cont = 0; cont < TAM; cont++)
    {
        printf("array1[%d]: ", cont);
        scanf("%d", &array1[cont]);
    }
    
    wprintf(L"Forneça os valores do segundo array:\n");
    for (int cont = 0; cont < TAM; cont++)
    {
        printf("array2[%d]: ", cont);
        scanf("%d", &array2[cont]);
    }

    for (int i = 0; i < TAM; i++)
    {
        int valor1 = array1[i];
        for (int j = i; j < TAM; j++)
        {
            int valor2 = array2[j];            
            if (valor1 == valor2)
            {
                bool existe = false;
                for (int k = 0; k < contador; k++)
                {
                    if(valor1 == inter[k]){
                        existe = true;
                        break;
                    }
                }
                if(!existe){
                    inter[contador++] = valor1;
                }
                break;
            }            
        }      
    }

    if(contador > 0) {
        wprintf(L"Os números de interseção são:\n");
    }

    for (int cont1 = 0; cont1 < contador; cont1++)
    {
        wprintf(L"Número[%d]: %d", cont1, inter[cont1]);
    }
}