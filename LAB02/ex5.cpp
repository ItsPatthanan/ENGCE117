#include <stdio.h>

char (*GetText2D( int row ))[16];

int main(){
    char (*str)[16];
    int row;
    printf("rows ? : ");
    scanf("%d", &row);
    str = GetText2D(row);
    for ( int i = 0 ; i < row ; i++ ){
        printf("%s \n", str[i]);
    } 
    return 0;
}

char (*GetText2D( int row ))[16]{
    int i;
    char (*text)[16];
    for ( i = 0 ; i < row ; i++ ){
    	printf("Enter String [%d] : ", i);
        scanf("%s", text[i]);
    } 
    return text;
}
