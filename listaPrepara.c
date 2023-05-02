/*
1. Um professor atribui pesos de 1 a 4 para as notas de quatro avaliações. A nota é calculada por
meio da média ponderada (N1 + N2*2 + N3*3 + N4*4)/10, onde N1 é a nota da primeira avaliação,
N2 a da segunda, etc. Leia 4 notas e apresente as notas e a média deste aluno, sendo a média
formatada com 1 casa decimal.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void questao1(){
    float n1, n2, n3, n4, media;

    printf("Informe a nota 1:\n");
    scanf("%f", &n1);

    printf("Informe a nota 2:\n");
    scanf("%f", &n2);

    printf("Informe a nota 3:\n");
    scanf("%f", &n3);

    printf("Informe a nota 4:\n");
    scanf("%f", &n4);

    printf("Notas informadas:\n");
    printf("Nota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\nNota 4: %.2f\n", n1, n2, n3, n4);

    media = (n1 + n2*2 + n3*3 + n4*4) / 10;
    printf("Media do aluno: %.1f\n", media);
}

/*
2. Implemente um programa em C que solicite dois inteiros (n1, n2) e exiba o quadrado de todos os
número pares e o cubo dos ímpares compreendidos entre n1 e n2, inclusive. Exemplo:
Entrada:
n1 = 1 e n2 = 5
Saída:
1 ==> 1
2 ==> 4
3 ==> 27
4 ==> 16
5 ==> 125
*/
void questao2(){
    int inf, sup, expoente;
    double resultado;

    printf("Informe o limite inferior:\n");
    scanf("%d", &inf);

    printf("Informe o limite superior:\n");
    scanf("%d", &sup);

    if (inf > sup){
        printf("O limite inferior deve ser menor do que o limite superior.\n");
    } else {
        for (int cont = inf; cont <= sup; cont++)
        {
            expoente = cont % 2 == 0 ? 2 : 3;
            resultado = pow(cont, expoente);           
            printf("%d ==> %0.lf\n", cont, resultado);
        }        
    }    
}

void questao3(){
    int n, i;
    float s = 0;

    printf("Digite um valor para N: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        s = s + (1.0*i);
    }

    printf("O valor de S eh: %.2f\n", s);
}
/*
Calcule o valor de (PI) utilizando séries finitas:
Pi = 4 – 4/3 + 4/5 – 4/7 + 4/9 – 4/11 + ...
*/
void paraCasa(){
    int cont = 1, divisor = 3;
    float pi = 4;
    int sair = 1;

    do {
        printf("Contador: %d -- divisor: %d -- pi: %.6f", cont, divisor, pi);
        if (cont % 2 == 1) {
            printf(" -- Sinal: -\n");
            pi -= (float) 4 / divisor;
        } else {
            printf(" -- Sinal: +\n");
            pi += (float) 4 / divisor;
        }
        cont++;
        divisor += 2;
        // printf("Digite 0 para sair.");
        // scanf("%d", &sair);
    } while (cont < 10000);
}

int main() {
    int opcao;
    do {
        printf("-- Qual questao deseja executar? (0 para sair)--\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 0:
                break;
            case 1:
                questao1();
                break;
            case 2:
                questao2();
                break;
            case 3:
                questao3();
                break;
            case 4:
                paraCasa();
                break;   
            default:
                printf("Opcao Invalida!\n");
                break;
        }
    } while (opcao != 0);

    printf("Saindo...");
}