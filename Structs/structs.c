#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char sexo;
    float espessura;
    char cor[10];
    float preco;
} lapis;

typedef struct {
    float peso;
    char nome[50];
    Data dataNascimento;
} pessoa;

int compararData(Data * d1, Data * d2){
    if (d1->ano < d2->ano){
        return -1;
    } 
    
    if(d1->ano > d2->ano){
        return 1;
    }
    
    if(d1->mes < d2->mes){
        return -1;
    }

    if(d1->mes > d2->mes){
        return 1;
    }

    if(d1->dia < d2->dia){
        return -1;
    }

    if(d1->dia > d2->dia){
        return 1;
    }

    return 0;
}

int imprimirData(Data * data){
    printf("%d/%d/%d\n", data->dia, data->mes, data->ano);
}

int main(){

    //pessoas();
    
    Data d1 = { .dia = 18, .mes = 12, .ano = 2023};
    Data d2 = { .dia = 12, .mes = 11, .ano = 2023};
    int resultado = compararData(&d1, &d2);
    printf("%d\n", resultado);
    imprimirData(&d1);
    imprimirData(&d2);
}

void pessoas(){

    pessoa p = { .peso = 70, .nome = "Aluno 1", .dataNascimento = 2023 };
    pessoa p1;

    printf("Informe o peso: ");
    scanf("%f", &p1.peso);

    printf("\nInforme o nome: ");
    scanf("%s", p1.nome);

    printf("\nInforme o dia de nascimento: \n");
    scanf("%d", &p1.dataNascimento.dia);

    printf("\nInforme o mes de nascimento: \n");
    scanf("%d", &p1.dataNascimento.mes);

        printf("\nInforme o ano de nascimento: \n");
    scanf("%d", &p1.dataNascimento.ano);

    printf("P1 -- Peso: %f -- Nome: %s -- Nascimento: %d\n", p1.peso, p1.nome, p1.dataNascimento);
    printf("P -- Peso: %f -- Nome: %s -- Nascimento: %d\n", p.peso, p.nome, p.dataNascimento);
}