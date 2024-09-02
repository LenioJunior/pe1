#include <stdio.h>
#include <stdlib.h>

typedef struct _pessoa {
    int idade;
    char sexo;
    char nome[100];
    struct _pessoa * filho;
} pessoa;

int main() {    

    printf("Informe quantos registros deseja efetuar:\n");
    int tamanho;
    scanf("%d", &tamanho);
    struct _pessoa p;

    for (int i = 0; i < tamanho; i++)
    {
        printf("Informe sua idade:\n");
        scanf("%d", &p.idade);
        
        printf("Informe seu sexo:\n");
        scanf(" %c", &p.sexo);

        int b = getchar();

        printf("Informe seu nome:\n");
        fgets(p.nome, sizeof(p.nome), stdin);

        printf("Ola %s, voce tem %d anos e seu sexo eh %c\n.", p.nome, p.idade, p.sexo);
    }    
}