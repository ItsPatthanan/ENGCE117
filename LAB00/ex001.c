#include <stdio.h>
int main() {
        int cook, water;
            printf("add water\n");
            printf("press the boiling button\n");
        do{
            printf("boiling water?\n");
            printf("press 1 for yes Press 0 for no\n"); 
            scanf("%d",&water);
        }while(water == 0);
            printf("put water in cup \n");
            printf("close the lid wait 3 min\n");
        do{
            printf("cooket ?\n");
            printf("press 1 for yes Press 0 for no\n");
            scanf("%d", &cook);
        }while(cook==0);
            printf("ready to eat\n");
        return 0;
}

