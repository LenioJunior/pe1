#include<stdio.h>
#include<stdbool.h>

int main(){

    printf("Programa para somar 5 numeros.\n");  
    
    int inc, dec;

    for(inc = 0, dec = 5; inc <= 5 && dec >= 0; inc++, dec--){       
        printf("Inc: %d\n", inc);
        printf("Dec: %d\n", dec);
    }

    return 0;
}