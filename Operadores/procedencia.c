/*
Supondo que A, B e C são variáveis do tipo inteiro, com valores iguais a 5, 10 e -8,
respectivamente, e uma variável D com valor de 1.5, quais os resultados das expressões
aritméticas apresentadas em seguida?
a) 2 ∗ A % 3 − C
b) sqrt(−2 ∗ C) / 4
c) ((20 / 3) / 3) + pow(2, 8) / 2
d) (30 % 4 ∗ pow(3, 3)) ∗ −1
e) pow(−C, 2) + (D ∗ 10) / A
f) sqrt(pow(A, B / A)) + C ∗ D
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){

    int A = 5, B = 10, C = -8;
    float D = 1.5;

    setlocale(LC_ALL, "Portuguese");
    
    wprintf(L"Questão A: %d\n", 2 * A % 3 - C);
    wprintf(L"Questão B: %.0Lf\n", sqrt(-2 * C) / 4);
    wprintf(L"Questão C: %.0Lf\n", ((20 / 3) / 3) + pow(2, 8) / 2);
    wprintf(L"Questão D: %.0Lf\n", (30 % 4 * pow(3, 3)) * -1);
    wprintf(L"Questão E: %.0Lf\n", pow(-C, 2) + (D * 10) / A);
    wprintf(L"Questão F: %.0Lf\n", sqrt(pow(A, B / A)) + C * D);
}