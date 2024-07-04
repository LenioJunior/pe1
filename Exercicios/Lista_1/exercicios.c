#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

void exercicio1();
void exercicio2();
void exercicio3();
void exercicio4();
void exercicio5();
void exercicio6();
void exercicio7();
void exercicio8();
void exercicio9();
void exibeMenuOpcoes();
void executaOpcaoEscolhida(int opcao);

void loop(){
    int opcao = 0;
    printf("Ola seja bem vindo!\n"); 

    do
    {
        exibeMenuOpcoes();
        scanf("%d", &opcao);
        executaOpcaoEscolhida(opcao);      

    } while (opcao != 0);
    
    printf("Finalizando App...");
}

void exibeMenuOpcoes(){
    printf("\n\n------------------------\n");
    printf("Digite o numero do exercicio (1 a 9) ou 0 para sair:\n");
    printf("------------------------\n");
}

void executaOpcaoEscolhida(int opcao){
    switch (opcao)
    {
        case 0:                
            break;  
        case 1:
            exercicio1();
            break;  
        case 2:
            exercicio2();
            break; 
        case 3:
            exercicio3();
            break; 
        case 4:
            exercicio4();
            break;   
        case 5:
            exercicio5();
            break;
        case 6:
            exercicio6();
            break;  
        case 7:
            exercicio7();
            break; 
        case 8:
            exercicio8();
            break; 
        case 9:
            exercicio9();
            break;                                                
        default:
            printf("Opcao invalida!\n");
            break;
    }    
}

void exercicio1(){
    printf("XXXXX\n");
    printf("X   X\n");
    printf("X   X\n");
    printf("X   X\n");
    printf("XXXXX\n");
}

void exercicio2(){
    wprintf(L"ALUNO (A)   NOTA\n");
    wprintf(L"ALINE       9.0\n");
    wprintf(L"MÁRIO       DEZ\n");
    wprintf(L"SÉRGIO      4.5\n");
    wprintf(L"SHIRLEY     7.0\n");
}

void exercicio3(){
    printf("Cadastro de Clientes\n");
    printf("0 - Fim\n");
    printf("1 - Inclui\n");
    printf("2 - Altera\n");
    printf("3 - Exclui\n");
    printf("4 - Consulta\n\n");
    wprintf(L"Opção: _\n");
}

void exercicio4(){
    float n1, n2, n3, n4, media;
    
    printf("Informe as 4 notas do aluno: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 + n2*2 + n3*3 + n4*4) / 10;
    
    printf("As notas informadas foram:\n");
    printf("N1: %.2f\nN2: %.2f\nN3: %.2f\nN4: %.2f\n", n1, n2, n3, n4);
    printf("A media obtida pelo aluno foi: %.1f.\n", media);
}

void exercicio5(){
    int idade, soma;
    
    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    soma = idade * (idade + 1) / 2;

    printf("A soma de todas as idades e: %d.\n", soma);
}

void exercicio6(){
    float n1, n2, n3, media;
    
    printf("Informe os 3 valores: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2*2 + n3*3) / 6;
    
    printf("Os valores informados foram:\nValor1: %.2f\nValor2: %.2f\nValor3: %.2f\n", n1, n2, n3);
    printf("A media ponderada obtida foi: %.1f", media);
}

void exercicio7(){
    float fahrenheit, celsius;
    
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (5/9) * (fahrenheit - 32);
    celsius = 13.33;

    printf("A temperatura em Fahrenheit informada e: %.2f.\nA temperatura em Celsius e: %.2f.\n", fahrenheit, celsius);
}

void exercicio8(){
    float numero;
    
    printf("Informe um valor com casas decimais: ");
    scanf("%f", &numero);

    float raiz = sqrt(numero);
    float potencia = pow(numero, 5);
    float log = log10f(numero);

    printf("O numero informado foi: %.2f.\n", numero);
    printf("Raiz: %.2f.\nPotencia: %.2f.\nLog na Base 10: %.5f.\n", raiz, potencia, log);
}

void exercicio9(){
    float frente, lateral, diagonal;
    
    printf("Informe o tamanho da frente da casa: ");
    scanf("%f", &frente);

    printf("Informe o tamanho da lateral da casa: ");
    scanf("%f", &lateral);

    diagonal = pow(frente, 2) + pow(lateral, 2);
    diagonal = sqrt(diagonal);

    printf("Deve ser comprados '%.2f' metros de fio.\n", diagonal);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    loop();
    return 0;
}