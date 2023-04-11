#include<stdio.h>
#include<stdbool.h>

int main(){
    int numero;
    // 2  4  6  8  10
    if (numero == 2 || numero == 4 || numero == 6 
        || numero == 8 || numero == 10){
        // OK
    } else {
        //ERRADO
    }







    if (numero == 2) { 
        //DOIS 
    } 
    else if (numero == 4) { 
        //QUATRO 
        //SEIS
    } 
    else if (numero == 6) { 
        //SEIS
     } 
    else if (numero == 8) {
        //OITO
    } 
    else if (numero == 10) { 
        //DEZ 
     } 
    else {  }

    int opcao;

    //printf("Informe um numero: ");
    // printf("1 - Cadastrar");
    // printf("2 - Listar");
    // printf("3 - Excluir");

    //scanf("%d", &opcao);

    // if(opcao == 1){
    //     printf("Cadastro");
    // } else if(opcao == 2) {
    //     printf("Listar");
    // } else if(opcao == 3) {
    //     printf("Excluir");
    // } else {
    //     printf("Opcao Invalida!");
    // }

    char letra = '-';
    printf("Informe uma letra: ");
    scanf("%c", &letra);

    // 2  4  6  8  10
    // ESCREVER POR EXTENSO O NUMERO
    switch (letra) {
    case 'd':
        printf("dois\n");
        break;
    case 'q':        
        printf("quatro\n");
        break;
    case 's':
        printf("seis\n");
        break;
    default:
        printf("Invalido\n");
        break;
    }









}