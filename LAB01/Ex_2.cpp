#include <stdio.h>
int main() {
  int n = 6;
  int g[4][6] = {{10, 20, 30, 40, 50, 60},
                 {11, 21, 31, 41, 51, 61},
                 {12, 22, 32, 42, 52, 62},
                 {13, 23, 33, 43, 53, 63}};
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 6; j++) {
      printf("%d ", g[i][j]);
    }
    printf("\n");
  }
  printf("--------------------------------\n");
  int(*p)[6] = g;
  p[1][5] = 99;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 6; j++) {
      printf("%d ", g[i][j]);
    }
    printf("\n");
  }

  return 0;
}
