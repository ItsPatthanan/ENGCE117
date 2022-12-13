#include <stdio.h>
#include <string.h>

char *GetText();
int main() {
  char str[16] ;
  strcpy(str, GetText());
  printf("\n%s\n", str);
  return 0;
}
char *GetText(){
  char *text = new char[16];
  printf("Enter String : ");
  gets(text);
  return text;
}
