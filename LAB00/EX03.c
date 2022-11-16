#include <stdio.h>
int main() {
    int item;
printf("prepare the list \n");
printf("Drive to the market");
do{
    printf("shop now\n");
    printf("got the item ?\n");
    printf("press 1 for yes press 0 for no\n");
    scanf("%d",&item);
} while(item==0);
    printf("pay\n");
    return 0;
}