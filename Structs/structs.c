#include <stdio.h>

int main()
{
    int n,i,s;

    printf("digite n: ");
    scanf("%d", &n);

        for(i = 0; i <= 10; i++){
            if(n%2 == 0){
            s=n+1;

            printf("Par \n",s);
    } else{
    printf("Impar \n",s);
}
    return 0;
}
}