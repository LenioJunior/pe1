#include <stdio.h>
#include <stdlib.h>

int main() {
   int a = 10, b = 1;
   int c;
   c = a + b;

   while (a > b && c >= 0) {
	a--;
	b--;
	c = a + b;
   	printf("%d %d %d\n", a, b, c);
   }
   return 0;
}
