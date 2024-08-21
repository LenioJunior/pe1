#include <stdio.h>
#include <stdlib.h>

int main() {
   
  int num;
  printf("Informe um numero:\n");
  scanf("%d", &num);

  for (int i = num, j = num + 20; i <= j; i+=2, j-=2)
  {
    printf("%d %d ", i, j);
  } 

  return 0;
}
