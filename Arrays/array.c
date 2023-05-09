#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); // also try "pt_BR"
    wprintf(L"açougue açucar aLô, olá\n");
    wprintf(L"açougue açucar aLô, olá\n");

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

