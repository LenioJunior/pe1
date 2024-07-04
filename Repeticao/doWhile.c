/*
    Leia um numero do teclado
    Se o número lido estiver entre 1 e 10 então:
    Escreva na tela os números, iniciando de 1 até o número lido.
    Se o número não estiver dentro do intervalo, não escreva nada. 
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero, contador = 1;
    printf("Informe um numero: \n");
    scanf("%d", &numero);

    while (contador <= numero && numero <= 10) {
        printf("%d ", contador);
        contador = contador + 1;
    }

    return 0;
}