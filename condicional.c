#include<stdio.h>

int main()
{
    int idade;

    printf("Informe um numero: \n");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Maior de idade.\n");
        printf("Mais algum codigo.\n");
    } else {
        printf("Voce e menor de idade");
    }
    
    printf("Fim");
}