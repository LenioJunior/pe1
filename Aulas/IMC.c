#include<stdio.h>
//#include<locale.h>
#include<math.h>

/*
    Dividir o peso pela altura duas vezes. 

    Exemplo:
    Digamos que você tem altura de 1,70 m e pesa 65 Kg. 
    Para calcular IMC você deverá dividir duas vezes o número 65 por 1,7.
*/

int main (){

    //setlocale(LC_ALL, "Portuguese");

    float peso = 0;
    float altura = 0;
    float imc;

    printf("Informe seu peso:\n");
    scanf("%f", &peso);

    printf("Informe sua altura:\n");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    printf("Seu peso é: %.2f\n", peso);
    //wprintf(L"Seu peso é: %.2f\n", peso);
    printf("Sua altura eh: %.3f\n", altura);
    printf("Seu IMC eh: %.3f\n", imc);
}
