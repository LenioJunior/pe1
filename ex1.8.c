#include<stdio.h>

int main(){
    int altura, largura, perimetro, area;
    
    printf("Informe a altura:");
    scanf("%d", &altura);

    printf("Informe a largura:");
    scanf("%d", &largura);

    perimetro = (2*largura) + (2*altura);
    area = largura * altura;

    printf("O perimetro e: %d\n", perimetro);
    printf("A area e: %d", area);

    return 0;
}