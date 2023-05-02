#include<stdio.h>
#include<stdbool.h>

int main(){
    int sair = 10000;

    while (sair != 0)
    {
        printf("1 - Cadastrar\n");
        printf("2 - Editar\n");
        printf("3 - Apagar\n");
        printf("0 - Sair\n");
        scanf("%d", &sair);

        switch(sair){
            case 0:
                break;
            case 1: 
                printf("---Cadastro---\n");
                break;
            case 2: 
                printf("---Editar---\n");
                break;
            case 3: 
                printf("---Apagar---\n");
                break;
            default:
                printf("---Opcao Invalida---\n");
        }

        // if(sair == 1) { }
        // else if (sair == 2) { }
        // else if (sair == 3) { }
        // else { }
    }
       
    printf("Finalizado.");

    return 0;
}