#include <stdio.h>
#include <stdlib.h>

int main() {
   int a = 2, b = 0;
   int c;
   c = a + b;
   if (a == b || a == c) {
 	printf("Teste 1\n");
   } else {
 	printf("Teste 2\n");
   }
   c = b + a * 2;
    //c = 1
    //5 > 0
    //a = 2
    //b = 0

   while (a + 3 >= b) {
    //printf("aaa %f", c % 2);
   	if (c % 2 == 0) {
     	c = 1;
   	}
   	else {
       	c = 0;
   	}
   	a = a - c - 1;
   	printf("%i %d\n", a, c);
   }
   return 0;
}
