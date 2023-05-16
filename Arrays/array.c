#include<stdio.h>
#include<stdlib.h>

int main()
{
    char opcao;
    
    do
    {
        printf("Digite:\n");
        opcao = getchar();
        putchar(opcao);
    } while (opcao != 'S');
    
    printf("Terminei");
    
    return 0;
}

