//นายพัทธนันท์ ใจช่วย 65543206026-8 SEC 2
#include <stdio.h>
#include <string.h>

struct KBcustom{
    char KBname[20];
    int KBqty;
    struct KBcustom *next;
};

struct KBcustom *AddKB(struct KBcustom **walk, char newKB[], int newQTY);
void showKB(struct KBcustom *walk);
void updateKB(struct KBcustom **walk, char select[],char newKB[], int newQTY);
void showback(struct KBcustom **walk );
void swapnode(struct KBcustom **walk, char KBone[], char KBtwo[]);

int main(){
    struct KBcustom *start;
    start = NULL;
    AddKB(&start, "RK", 28);
    AddKB(&start, "KBD", 9);
    AddKB(&start, "Keychron", 20);
    AddKB(&start, "LOGA", 5);showKB(start);
    updateKB(&start, "LOGA", "Glorious",18);showKB(start);
    swapnode(&start, "RK", "Keychron");showKB(start);
    showback(&start);showKB(start);
    return 0;
}
struct KBcustom *AddKB(struct KBcustom **walk, char newKB[],int newQTY){
    while (*walk != NULL){
        walk = &(*walk)->next;
    }
    *walk = new struct KBcustom;
    strcpy((*walk)->KBname,newKB);
    (*walk)->KBqty = newQTY;
    (*walk)->next = NULL;
    return *walk;
}
void showKB(struct KBcustom *walk){
    while (walk != NULL){
        printf("%s ", walk->KBname);
        printf("%d ", walk->KBqty);
        walk = walk->next;
    }
     printf("\n");
}
void updateKB(struct KBcustom **walk, char select[],char newKB[], int newQTY ){
    while (strcmp((*walk)->KBname, select) != 0 ){
        walk = &(*walk)->next;
    }
    strcpy((*walk)->KBname, newKB);
    (*walk)->KBqty = newQTY;
}
void showback(struct KBcustom **walk){  
    struct KBcustom *currKBnode = *walk;
    struct KBcustom *preKBnode = NULL;
    struct KBcustom *nextKBnode = NULL;
    
    while (currKBnode != NULL){
        nextKBnode = currKBnode->next;
        currKBnode->next = preKBnode;
        preKBnode = currKBnode;
        currKBnode = nextKBnode;
    }
    *walk = preKBnode;
}
void swapnode(struct KBcustom **walk, char KB1[], char KB2[]){

    struct KBcustom *preKB1 = NULL, *currKB1 = *walk;
    while (strcmp( currKB1->KBname, KB1 ) != 0 ){
        preKB1 = currKB1;
        currKB1 = currKB1->next;
    }

    struct KBcustom *preKB2 = NULL, *currKB2 = *walk;
    while (strcmp( currKB2->KBname, KB2) != 0 ){
        preKB2 = currKB2;
        currKB2 = currKB2->next;
    }
 
    if(preKB1 != NULL){
        preKB1->next = currKB2;
    }else{
        *walk = currKB2;
    }   
    if(preKB2 != NULL){
        preKB2->next = currKB1;
    }else{
        *walk = currKB1;
    }
    
    struct KBcustom *temp = currKB2->next;
    currKB2->next = currKB1->next;
    currKB1->next = temp;
}
