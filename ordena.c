#include<stdio.h>
#include<stdlib.h>

#define N 10

int main(){
    int numeros[10] = {9, 6, 3, 2, 1, 7, 5, 4, 8, 0};

    int cont1, cont2, aux;

    for (cont1 = 0; cont1 < N; cont1++)
    {        
        for (cont2 = cont1 + 1; cont2 < N; cont2++)
        {
            aux = numeros[cont1];
            if (numeros[cont2] < aux)
            {
                numeros[cont1] = numeros[cont2];
                numeros[cont2] = aux;
            }            
        }
    }
    
    for (cont1 = 0; cont1 < N; cont1++)
    {
        printf("%d-", numeros[cont1]);
    }    
}