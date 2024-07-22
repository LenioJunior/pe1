/*
Leia um valor inteiro X. 
Em seguida apresente os 6 valores ímpares consecutivos a partir de X, 
um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada será um valor inteiro positivo.

Saída
A saída será uma sequência de seis números ímpares.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int valor;
    scanf("%d", &valor);

    for (int i = 0; i < 6; i++)
    {
        if(valor % 2 == 0){
            valor++;
        }
        printf("%d\n", valor);
        valor++;
    }    
}