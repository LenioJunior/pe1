#include<stdio.h>

float soma(float num1, float num2){
    printf("Num1 Soma: %f", num1);
    printf("Num2 Soma: %f", num2);

    return num1 + num2;
}

int main()
{
    //printf("Hello");
    int numero1 = 10;
    int numero2 = 0;
    char letra = 'A';
    printf("O numero 1 digitado foi: %d\n", numero1);
    printf("O numero 2 digitado foi: %d\n", numero2);
    if(numero2 == 0)
    {
        printf("O numero2 nao pode ser zero!");
        return 60;
    }
        
    float divisao = numero1 / numero2;
    printf("A divisao eh: %lf", divisao);

    float num1 = 100;
    float num2 = 200;
    printf("Num1 Main: %f", num1);
    printf("Num2 Main: %f", num2);

    soma(num2, num1);
    return 0;
}

