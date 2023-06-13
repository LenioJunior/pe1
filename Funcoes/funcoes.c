#include<stdio.h>
#include<stdlib.h>

int soma(int numero1, int numero2);

int subtracao(int numero1, int numero2);

int multiplicacao(int numero1, int numero2);

double divisao(int numero1, int numero2);

void exibeMenuOpcoes(){
    printf("Digite a opcao desejada:\n");
    printf("0: Informar numeros\n");
    printf("1: Somar\n");
    printf("2: Subtrair\n");
    printf("3: Multiplicar\n");
    printf("4: Dividir\n");        
    printf("-1: Sair\n");
    printf("--------\n");
}

int lerNumeroInteiro(int indice){
    int numero = 0;
    printf("Informar numero %d:\n", indice);
    scanf("%d", &numero);
    return numero;
}

void executaOpcaoEscolhida(int opcao, int n1, int n2){
    switch (opcao)
    {
        case 0:                
            break;  
        case 1:
            printf("Soma: %d\n", soma(n1, n2));
            break;  
        case 2:
            printf("Subtracao: %d\n", subtracao(n1, n2));
            break; 
        case 3:
            printf("Subtracao: %d\n", multiplicacao(n1, n2));
            break; 
        case 4:
            printf("Subtracao: %lf\n", divisao(n1, n2));
            break;   
        case -1:
            printf("Saindo...\n");
            break;                                                     
        default:
            printf("Opcao invalida!\n");
            break;
    }    
}

int main(){
    int n1, n2, opcao = 0;
    do
    {
        printf("Ola seja bem vindo!\n");        

        if (opcao == 0)
        {
            n1 = lerNumeroInteiro(1);
            n2 = lerNumeroInteiro(2);
        }       
        exibeMenuOpcoes();
        scanf("%d", &opcao);
        executaOpcaoEscolhida(opcao, n1, n2);
        

    } while (opcao != -1);
    
    printf("Finalizando App...");

    return 0;
}

int soma(int numero1, int numero2){
    return numero1 + numero2;
}

int subtracao(int numero1, int numero2){
    return numero1 - numero2;
}

int multiplicacao(int numero1, int numero2){
    return numero1 * numero2;
}

double divisao(int numero1, int numero2){
    return (double) numero1 / numero2;
}