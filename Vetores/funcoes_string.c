#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int main(){
    char str1[10];
    char str2[10];

    fgets(str1, 10, stdin);
    fgets(str2, 10, stdin);

    printf("\n");

    printf("%s\n", str1);
    printf("%s\n", str2);

    int t1 = strlen(str1);
    int t2 = strlen(str2);

    printf("Tamanho str1: %d\n", t1);
    printf("Tamanho str2: %d\n", t2);

    //strcpy(str1, str2);

    //printf("\n%s\n", str1);
    //printf("%s\n", str2);

    //t1 = strlen(str1);
    //t2 = strlen(str2);

    //printf("Tamanho str1: %d\n", t1);
    //printf("Tamanho str2: %d\n", t2);

    char * cat = strcat(str1, str2);
    printf("Concat str1 e str2: %s\n", cat);

    

    //char s[] = strcat(str1, str2);
}