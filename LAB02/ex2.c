#include <stdio.h>
void GetText(char *text);
int main() {
  char str[20];
  GetText(str);
  printf("%s", str);
  return 0;
}
void GetText(char *text) {
    printf("Enter String : ");
    gets(text); 
    }