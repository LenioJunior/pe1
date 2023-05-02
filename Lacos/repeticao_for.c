#include<stdio.h>
#include<stdbool.h>

int main(){

    printf("Programa para somar 5 numeros.\n");  
    
    int inc, dec;

    for(inc = 0, dec = 5; inc <= 5 && dec >= 0; inc++, dec--){       
        //printf("Inc: %d\n", inc);
        //printf("Dec: %d\n", dec);
    }

    for(inc = 0, dec = 30; inc <= 30 && dec >= 0; inc+=2, dec-=3){       
        // printf("Inc: %d\n", inc);
        // printf("Dec: %d\n", dec);
    }

    int soma = 0, cont, num;

    for(cont = 1; cont <= 5; cont++){ 
        printf("Informe o %d numero: \n", cont);      
        scanf("%d", &num);
        soma += num;
    }
    
    printf("A soma eh: %d", soma);
    return 0;
}