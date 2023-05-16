#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define POS 5

int main(){
    int array[POS];
    double arrayCubo[POS];
    for (int cont = 0; cont < POS; cont++)
    {
        printf("array[%d]: ", cont);
        scanf("%d", &array[cont]);
        arrayCubo[cont] = pow(array[cont], 3);
    }

    for (int cont = 0; cont < POS; cont++)
    {
        printf("arrayCubo[%d] = %0.lf\n", cont, arrayCubo[cont]);
    }
}