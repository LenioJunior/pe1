#include<stdio.h>
#include<stdbool.h>

void ternario(){
    int codigo = 10;
    char letra = '1';

    char outraLetra = codigo == 10 ? 'A' : 'B';

    if(codigo == 10){
        letra = 'A';
    } else {
        letra = 'B';
    }

    printf("A letra e: %c", letra);
}

void valorLogico(){
    bool acessou = false;
    char pass[3] = "123";

    if(pass == "123"){
        acessou = true;
    } else {
        acessou = false;
    }
}

int main(){    
    ternario();
    valorLogico();    
}