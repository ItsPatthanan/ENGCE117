#include <stdio.h>
int main(){
    int shop,scuess;
    printf("Prepare a shopping list\n");
    do{
        printf("Shopping by list\n");
        printf("Have you bought all?\n");
        printf("press 1 for yes press 0 fon no\n");
        scanf("%d", &shop);
    } while (shop == 0);
        printf("shop cleaning\n");
        printf("Have you bought all?\n");
    do{
        printf("prepare raw materials\n");
        printf("The raw materials are ready?\n");
        printf("press 1 for yes press 0 fon no\n");
        scanf("%d", &scuess);
    } while (scuess == 0);
        printf("open shop\n");
    return 0;
}
