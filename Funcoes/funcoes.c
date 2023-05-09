#include<stdio.h>

int soma(int numero1, int numero2){ return numero1 + numero2; }
int subtracao(int numero1, int numero2){ return numero1 - numero2; }
int multiplicacao(int numero1, int numero2){ return numero1 * numero2; }
float divisao(int numero1, int numero2){return (float)numero1 / numero2; }

int main(){

    printf("Ola seja bem vindo!\n");
    printf("Digite a opcao desejada:\n");
    printf("1: Somar\n");
    printf("2: Subtrair\n");
    printf("3: Multiplicar\n");
    printf("4: Dividir\n");
    printf("-1: Sair\n");

    char letra = 'A';
    int numero1 = 10, numero2 = 2;
    int opcao = 1000;

    scanf("%d", &opcao);
    
    if(opcao == 1){
        printf("A soma e: %d", soma(numero1, numero2));
    }
    else if(opcao == 2){
        printf("A subtracao e: %d", subtracao(numero1, numero2));
    }
    else if(opcao == 3){
        printf("A multiplicacao e: %d", multiplicacao(numero1, numero2));
    }
    else if(opcao == 4){
        printf("A divisao e: %d", divisao(numero1, numero2));
    }
    else {
        printf("Saindo...");
    }
    
    return 0;
}