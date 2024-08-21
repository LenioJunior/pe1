#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<string.h>

const char alfabeto_correto[] = "abcdefghijklmnopqrstuvwxyz ";

int compararStrcmp(char * alfabeto_digitado){
    return strcmp(alfabeto_correto, alfabeto_digitado);
}

int compararLaco(char * alfabeto_digitado){
    for (int i = 0; i < sizeof(alfabeto_digitado); i++)
    {
        if (alfabeto_digitado[i] != alfabeto_correto[i])
            return 1;
    }
    return 0;
}

int main ()
{
    char alfabeto[30];
    struct timeval start, end;
    double tempo_gasto;

    printf("Digite o alfabeto de 'a' a 'z':\n");

    gettimeofday(&start, NULL);

    fgets(alfabeto, sizeof(alfabeto), stdin);

    gettimeofday(&end, NULL);

    tempo_gasto = (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) /1000000.0;

    char op;
    do
    {
        printf("Escolha qual opcao de verificao deseja executar:\n");
        printf("1- Funcao strcmp\n");
        printf("2- Laco de repeticao\n");
        scanf("%c", &op);
    } 
    while (op != '1' && op != '2');
    int result = -1;

    if (op == 1)
    {
        result = compararStrcmp(alfabeto);
        printf("A verificacao foi realizada utilizando a funcao strcmp.\n");
    } else {
        result = compararLaco(alfabeto);
        printf("A verificacao foi realizada utilizando laco de repeticao.\n");
    }    

    if (result == 0)
    {
        printf("Parabéns! Alfabeto digitado corretamente!\n");
    }
    else
    {
        printf("Erro! Alfabeto digitado INCORRETAMENTE!\n");
    }

    printf("Voce digitou: %s\n", alfabeto);
    printf("Tempo gasto: %f segundos.\n", tempo_gasto);
}