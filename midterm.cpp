#include <stdio.h>
#include <string.h>
struct sll
{
   int num;
   struct sll *next;
};
struct sll *Addnode(struct sll **walk, int n);
//void Insertnode(struct sll *walk, int n);
void Showall(struct sll *walk);
void Updetanode(struct sll *walk, int n);
void Showback(struct sll **sb);
void Swapnode(struct sll *walk);

int main(){
    struct sll *start, *now;
    start = NULL;
    now = Addnode(&start, 10);//Showall(start);
    now = Addnode(&start, 20);//Showall(start);
    now = Addnode(&start, 30);//Showall(start);
    now = Addnode(&start, 40);Showall(start);
    /*Updetanode( &start,10,99);Showall(start);
    Updatenode( &start, 10, 98 );Showall(start);
    Showback(start);
    Swapnode(&start, 20, 30);Showall(start);
    Swapnode(&start, 40, 10);Showall(start);*/

   return 0;
}
struct sll *Addnode(struct sll **walk, int n){
    while (*walk != NULL){
        walk = &(*walk)->next;
    }
    *walk = new struct sll;
    (*walk)->num = n;
    (*walk)->next = NULL; 
}
void Showall(struct sll *walk){
    while (walk != NULL)
    {
        printf("%d ",walk->num);
        walk = walk->next;
    }
}

void Updatenode(struct sll *walk,int n){
    walk = walk->next;
    walk->num = n;

}

void Showback(struct sll *walk){

}

void Swapnode(struct sll *walk){

}
