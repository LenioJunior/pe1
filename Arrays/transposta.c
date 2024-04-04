#include <stdio.h>
#include <stdlib.h>

int main() {

  int a[2][3] = { {1,2,3}, {4,5,6}};
  
  int r = 2, c=3;
  int  b[2][2] = {0};
  
  for (int i = 0; i < r; ++i)
     for (int j = 0; j < c; ++j) {
         b[j][i] = a[i][j];
  }

  for (int i = 0; i < c; ++i)
    for (int j = 0; j < r; ++j) {
        printf("%d  ", b[i][j]);
        if (j == r - 1)
            printf("\n");
    }
}

