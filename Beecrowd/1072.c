/*
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, 
mostrando essas informações.

Entrada
A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o número de casos de teste.
Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).
 

Saída
Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão fora (out) do intervalo.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int quantidade, dentro = 0, fora = 0;

    scanf("%d", &quantidade);
    int valores[quantidade];

    for (int i = 0; i < quantidade; i++)
    {
        scanf("%d", &valores[i]);

        valores[i] >= 10 && valores[i] <= 20 ? dentro++ : fora++;

        // if (valores[i] >= 10 && valores[i] <= 20)
        // {
        //     dentro++;
        // } 
        // else {
        //     fora++;
        // }
    }

    printf("%d in\n%d out\n", dentro, fora);
}