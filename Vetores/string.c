#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int main(){

    int ant = 0, prox = 0, num = 5;

    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("%d", prox);

        int temp = ant;
        ant = prox;
        prox += temp;
        
        if (prox == 0)
        {
            prox++;
        }
        
        if (i < num - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
}