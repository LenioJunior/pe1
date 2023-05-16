#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 5

int main(){

    setlocale(LC_ALL, "Portuguese");

    int array1[TAM], array2[TAM], arraySoma[TAM];
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
        arraySoma[cont] = array1[cont] + array2[cont];
    }

    for (int cont = 0; cont < TAM; cont++)
    {
        printf("arraySoma[%d]: %d\n", cont, arraySoma[cont]);
    }
}