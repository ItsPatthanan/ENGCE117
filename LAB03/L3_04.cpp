#include <stdio.h>
#include <string.h>

struct keyboard
{
    char productName[20];
    int price;
};

int main(){
    struct keyboard *d1;
    struct keyboard d2;

    strcpy(d2.productName,"RK61");
    d2.price = 1590;
    d1 = &d2;
    printf("%s ",(*d1).productName);
    printf("%d bath\n",(*d1).price);
  
    printf("price change! \n");


    printf("%s ",(*d1).productName);
    d1 ->price = 1390;
    printf("%d bath\n",(*d1).price);
    printf("current price = ");
     printf("%d bath\n",d2.price);
    
    return 0 ;
}


   