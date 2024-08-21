#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Informe o tamanho do vetor:\n");
    int tam;
    scanf("%d", &tam);

    int num[tam];

    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &num[i]);
    }
    
    for (int i = tam - 1; i >= 0; i--){
        printf("%d ", num[i]);
    }
}