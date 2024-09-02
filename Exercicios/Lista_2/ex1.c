
/*
Exercício 1: Sistema de Gerenciamento de Funcionários
Descrição: Crie uma struct chamada Funcionario com os campos: 
    nome (string), cargo (string), salário (float) e data de admissão (struct com dia, mês e ano). 

Escreva um programa que permita ao usuário cadastrar até 10 funcionários. 
O programa deve permitir que o usuário busque um funcionário pelo nome e exiba suas informações, 
incluindo o tempo de trabalho na empresa (em anos).
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data {
    int dia;
    int mes;
    int ano;
};

struct funcionario {
    char nome[100];
    char cargo[100];
    float salario;
    struct data admissao;
};

int main(int argc, char argv[]) {
    int tamanho = 3;
    struct funcionario f[tamanho];
    int opcao;
        
    do
    {
        printf("---------------------------------------------\n");
        printf("1-Cadastrar\n");
        printf("2-Buscar\n");
        printf("3-Listar\n");
        printf("4-Sair\n");
        scanf("%d", &opcao);        
        switch (opcao)
        {
            case 1:
                for (int cont = 0; cont < tamanho; cont++)
                {                
                    printf("Informe o nome:\n");  
                    //fgets(f[cont].nome, sizeof(f[cont].nome), stdin);
                    scanf(" %[^\n]", f[cont].nome);             

                    printf("Informe o cargo:\n");
                    //fgets(f[cont].cargo, sizeof(f[cont].cargo), stdin);
                    scanf(" %[^\n]", f[cont].cargo);

                    printf("Informe o salario:\n");
                    scanf("%f", &f[cont].salario);

                    printf("Informe o dia de admissao:\n");
                    scanf("%d", &f[cont].admissao.dia);

                    printf("Informe o mes de admissao:\n");
                    scanf("%d", &f[cont].admissao.mes);

                    printf("Informe o ano de admissao:\n");
                    scanf("%d", &f[cont].admissao.ano);

                    getchar();
                }

                break;
            case 2:
                int encontrou = 1;
                char busca[200];
                printf("Informe o nome a buscar:\n");
                //fgets(busca, sizeof(busca), stdin);
                scanf(" %[^\n]", busca);
                for (int cont = 0; cont < tamanho; cont++)
                {
                    encontrou = strcmp(busca, f[cont].nome);
                    if (encontrou == 0){
                        printf("\nInformacoes do cadastro %d:\n", cont + 1);
                        printf("Nome: %s\n", f[cont].nome);
                        printf("Cargo: %s\n", f[cont].cargo);
                        printf("Salario: %.2f\n", f[cont].salario);
                        printf("Dia: %d\n", f[cont].admissao.dia);
                        printf("Mes: %d\n", f[cont].admissao.mes);
                        printf("Ano: %d\n", f[cont].admissao.ano);
                        printf("-----------------------------\n");
                        //break;
                    }                                     
                }

                if(encontrou != 0)
                    printf("O registro informado nao foi encontrado\n");
                break;
            case 3:
                for (int cont = 0; cont < tamanho; cont++)
                {
                    printf("\nInformacoes do cadastro %d:\n", cont + 1);
                    printf("Nome: %s\n", f[cont].nome);
                    printf("Cargo: %s\n", f[cont].cargo);
                    printf("Salario: %.2f\n", f[cont].salario);
                    printf("Dia: %d\n", f[cont].admissao.dia);
                    printf("Mes: %d\n", f[cont].admissao.mes);
                    printf("Ano: %d\n", f[cont].admissao.ano);
                    printf("-----------------------------\n");
                }                
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 4);
}