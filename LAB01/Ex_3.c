#include <stdio.h>
int _add(int x, int y) { 
  return x + y; 
  }
int _operation(int x, int y, int (*function)(int, int)){
  return (*function)(x, y);
}
int main(){
  printf("==> %d\n", _operation(26, 8, _add));
  return 0;
}