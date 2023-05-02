#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    //setlocale(LC_ALL, "Portuguese");
    setlocale(LC_ALL,"");
    printf("Utilizando caracteres e acentuação da língua portuguesa!\n\n");

    int opcao;
    int treinos[3];

    treinos[0] = 1;
    treinos[1] = 10;
    treinos[2] = 100;

    do
    {
        printf("Informe o treino desejado (1 a 3). Informe 0 para sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 1:
                printf("O treino 1 inclui:\n");
                printf("Braco\n");
                printf("Perna\n");
                break;
            case 2:
                printf("O treino 2 inclui:\n");
                printf("Lombar\n");
                printf("Panturrilha\n");
                break;
            case 3:
                printf("O treino 3 inclui:\n");
                printf("Cabeca\n");
                printf("Pe\n");
                break;       
            default:
                break;
        }
    } while (opcao !=0);
    

    return 0;
}

