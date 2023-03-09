#include<stdio.h>

int soma(int n1, int n2){
    if(n1 == 0 || n2 == 0)
        return -10;

    return n1 + n2;
}


char teste(int n){
    if(n == 0){
        return 'A';
    } else if (n == 1){
        return 'B';
    }
    printf("AQUI");
    return '-';
}

int lerNumero(int numero){
    do {
        printf("Digite o numero: %d", numero);
        scanf("%d", &numero);
    } while(numero <= 0);
}

int main(){

    return 0;
    
    printf("Iniciando 9%...\n");
    teste(1);

    int numero1;
    int numero2;

    int numero3 = 10;

    printf("Iniciando %d%...\n", numero3);

    numero1 = lerNumero(numero1);
    numero2 = lerNumero(numero2);

    int soma = numero1 + numero2;

    printf("A soma e: %d", soma);

    return 0;
}