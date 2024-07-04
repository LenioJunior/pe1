/*
    Leia um numero do teclado
    Se o número lido estiver entre 1 e 10 então:
    Escreva na tela os números, iniciando de 1 até o número lido.
    Se o número não estiver dentro do intervalo, não escreva nada. 
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero = 3;
    
    printf("%d ", numero++);
    printf("%d ", numero++);
    printf("%d\n", numero++);

    printf("=================\n");

    numero = 3;
    
    printf("%d ", ++numero);
    printf("%d ", ++numero);
    printf("%d ", ++numero);

    return 0;
}