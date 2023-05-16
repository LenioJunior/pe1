#include<locale.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    wprintf(L"açougue açucar aLô, olá\n");
}