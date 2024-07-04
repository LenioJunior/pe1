#include<stdio.h>
#include<stdlib.h>

int main(){
    int valor = 5;
    printf("Valor: %d\n", valor--);
    printf("Valor: %d\n", valor--);
    printf("Valor: %d\n", valor--);

    printf("---------------------------\n");

    valor = 5;
    printf("Valor: %d\n", --valor);
    printf("Valor: %d\n", --valor);
    printf("Valor: %d\n", --valor);
}