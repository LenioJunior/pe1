#include<stdio.h>
//#include<locale.h>
#include<math.h>

int main(){
char * nome;
     double salario, totalVendas, salarioFinal;
     
     //scanf("%s", &nome);
     scanf("%lf %lf", &salario, &totalVendas);

     printf("Salario: %lf\nTotalVendas: %lf\n", salario, totalVendas);
     
     salarioFinal = ((totalVendas * 0.15) + salario);
     
     printf("TOTAL = R$ %.2lf\n", salarioFinal);
 
    return 0;
}