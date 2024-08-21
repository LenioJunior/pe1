/*
E aí, preparado? Mais uma vez precisamos da sua ajuda! 
Depois de algumas trocas de aparelhos, e manutenções no prédio da informática, 
os teclados do IF (IFSULDEMINAS) sofreram uma brincadeira de mau gosto na formatação do teclado, 
suas teclas estão trocadas. Como os computadores do IF são preparados para receber qualquer software, 
desenvolva o mais rápido possível um programa que converta as frase da forma correta.

Observação: o teclado trocara todas as teclas do teclado, por isso todos caracteres são aceitos.

Entrada
Terá dois inteiro N e M indicando respectivamente: 
o número de letras que foram trocadas e as frases que foram inscritas. 
Em seguida E e S, que são as M transformações que ocorrem no teclado.

Saída
Imprima o mais rápido possível a frase correta.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int tamanho_frase = 100;
    int numLetrasTrocadas = 0, numFrases = 0;

    scanf("%d %d", &numLetrasTrocadas, &numFrases);
    char deLetra[numLetrasTrocadas], paraLetra[numLetrasTrocadas];
    char frase[tamanho_frase];

    for (int i = 0; i < numLetrasTrocadas; i++)
        scanf(" %c %c", &deLetra[i], &paraLetra[i]);

    int c = getchar();

    while (numFrases--)
    {
        //fgets(frase, tamanho_frase, stdin);
        scanf(" %[^\n]", frase);
        
        int i = 0;
        while (frase[i])
        {
            for (int k = 0; k < numLetrasTrocadas; k++)
            {                
                if(frase[i] == deLetra[k]){
                    frase[i] = paraLetra[k];
                }
                else if(frase[i] == paraLetra[k]){
                    frase[i] = deLetra[k];
                }
            }             
            i++;
        }
        printf("%s\n", frase);
    }
}