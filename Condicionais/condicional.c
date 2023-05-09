#include<stdio.h>

int main()
{
    char codigo = 'D';
    int idade = 18;
    char sexo = 'F';
    int ano = 2000;
    double v = 13.5;

    if(idade != 18 || sexo != 'M' && 
        (ano > 2001 && codigo == 'D')){
        printf("Entrou no IF.\n");
    } 
}