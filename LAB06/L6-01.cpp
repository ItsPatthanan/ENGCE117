#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NULL 0
struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
    struct studentNode *back ;
} ;

struct studentNode *AddNode( struct studentNode **walk, char n[], int a, char s, float g ); // prototype
void InsNode( struct studentNode *walk, char n[], int a, char s, float g ); // prototype
void ShowAll( struct studentNode *walk ) ;// prototype
void GoBack( struct studentNode **walk ) ;// prototype
void DelNode( struct studentNode *walk );// prototype

int main() {
    struct studentNode *start, *now ;
    start = NULL ;
    now = AddNode( &start, "one", 1, 'M', 3.11 ) ; ShowAll( start ) ;
    now = AddNode( &start, "two", 2, 'F', 3.22 ) ; ShowAll( start ) ;
    InsNode( now, "three", 3, 'M', 3.33 ) ; ShowAll( start ) ;
    InsNode( now, "four", 4, 'F', 3.44 ) ; ShowAll( start ) ;
    GoBack( &now ) ;
    DelNode( now ) ; ShowAll( start ) ; 
    DelNode( now ) ; ShowAll( start ) ; 
    DelNode( now ) ; ShowAll( start ) ; 
    return 0 ;
}//end function

struct studentNode *AddNode( struct studentNode **walk, char n[], int a, char s, float g ){
    struct studentNode *temp = NULL;

    while ( *walk != NULL ){
        temp = *walk;
        walk = &(*walk)->next;
    }
    *walk = new struct studentNode;
    strcpy((*walk)->name, n);
    (*walk)->age = a;
    (*walk)->sex = s;
    (*walk)->gpa = g;
    (*walk)->next = NULL;
    (*walk)->back = temp;
    return *walk;
}

void InsNode( struct studentNode *walk, char n[], int a, char s, float g ){
    if( walk->back != NULL ){
        walk->back->next = new struct studentNode;
        strcpy(walk->back->next->name, n);
        walk->back->next->age = a;
        walk->back->next->sex = s;
        walk->back->next->gpa = g;
        walk->back->next->next = walk;
        walk->back->next->back = walk->back;
        walk->back = walk->back->next;
    }
}

void GoBack( struct studentNode **walk ){
    (*walk) = (*walk)->back;
}

void DelNode( struct studentNode *walk ){
    printf("node now input : %s | ", walk->name);
    struct studentNode *temp;
    walk->back->next = walk->next;
    if( walk->next != NULL ){
        walk->next->back = walk->back;
        temp = walk->next;
    }else{
        temp = walk->back;
    }
    delete walk;
    walk = temp;
    walk->back;
}

void ShowAll( struct studentNode *walk ) {
    while( walk != NULL ) {
    printf( "%s ", walk->name ) ;
    walk = walk->next ;
    }
    printf( " \n" ) ;
}