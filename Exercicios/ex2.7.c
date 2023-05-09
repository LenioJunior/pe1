#include<stdio.h>
#include<stdbool.h>

int main(){
    float num1, num2;

    printf("Informe dois numeros: \n");
    scanf("%f %f", &num1, &num2); 
   
    bool maiorQueDez = num1 + num2 > 10 ? true : false;

    if (maiorQueDez)
    {
        printf("Os numeros lidos foram: %.2f e %.2f\n", num1, num2);
    } else
    {
        printf("A subtracao e: %.2f", num1 - num2);
    }   
}