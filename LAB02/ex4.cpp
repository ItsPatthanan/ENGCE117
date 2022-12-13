#include <stdio.h>
void GetText(char **text);
int main(){
    char *str;
    GetText(&str);
    printf("\n%s\n",str);
    return 0;
}
void GetText(char **text){
    *text = new char[20];
    printf("Enter String : ");
    gets(*text);
}