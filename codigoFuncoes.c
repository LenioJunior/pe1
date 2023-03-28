#include<stdio.h>
#include<stdbool.h>

float somaMaisDezPorcento(int num1, int num2){
    float result = (num1 + num2) * 1.1;
    return result;
}

void lerNumeroPonteiro(int * numero){
    printf("Informe um numero:\n");
    scanf("%d", numero);
}

int lerNumero(){
    printf("Informe um numero:\n");
    int variavel;
    scanf("%d", &variavel);
    return variavel;
}

void lerPonteiros(){
    int n1, n2;
    lerNumeroPonteiro(&n1);
    lerNumeroPonteiro(&n2);

    printf("A soma dos numeros %d e %d e: %d\n", n1, n2, n1 + n2);
}

void lerNumeros(){
    int num1 = lerNumero();
    int num2 = lerNumero();

    printf("Soma + 10%% e: %.2f\n", somaMaisDezPorcento(num1, num2));

    printf("Numero 1: %d\n", num1);
    printf("Numero 2: %d", num2);
}

int main(){
    lerPonteiros(); 
    //lerNumeros();    
}