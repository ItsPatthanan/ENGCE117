#include <stdio.h>
int main() {
  int g[4][4] = {{10, 20, 30, 40},
                 {11, 21, 31, 41},
                 {12, 22, 32, 42},
                 {13, 23, 33, 43}
                 };
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", g[i][j]);
    }
    printf("\n");
  }
  printf("--------------------------------\n");
  int(*p)[4] = g;
  p[1][3] = 99;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", g[i][j]);
    }
    printf("\n");
  }
  return 0;
}
