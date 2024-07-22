/*
Leia 3 valores inteiros e ordene-os em ordem crescente. 
No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, 
os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int v[3];
    int o[3];
    int r[3], temp;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &v[i]);
        o[i] = v[i];
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if(v[i] > v[j]){
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", v[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {        
        printf("%d\n", o[i]);
    }
}