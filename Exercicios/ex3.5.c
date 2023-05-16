#include<stdio.h>
#include<stdbool.h>

int main(){
    int numero;

    printf("Informe um numero maior ou igual a 0: \n");
    scanf("%d", &numero); 
   
    if (numero >= 0)
    {
        for (int cont = 0; cont <= numero; cont++)
        {
            printf("%d ", cont);
        }        
    } 
    else
    {
        printf("Valor incorreto (negativo)");
    }   
}