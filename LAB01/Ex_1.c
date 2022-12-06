#include <stdio.h>
int main() {
  int *a;
  int var = 15;
  a = &var;
  printf("*a = %d\n", *a);
  var = 25;
  printf("*a = %d\n", *a);
  *a = 35;
  printf("*a = %d\n", *a);
  printf("var = %d\n", var);
  return 0;
}