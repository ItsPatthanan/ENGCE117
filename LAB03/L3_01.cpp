#include <stdio.h>
#include <string.h>

struct ItMe
{
    char name[20];
    int age;
    char sex;
    float gpa;
};
typedef struct ItMe me;
int main(){
    me n, a, s;
    strcpy(n.name,"Patthanan");
    a.age = 21;
    s.sex = 'M';
    printf("Name: %s \nAge: %d \nSex: %c",n.name, a.age, s.sex);
    return 0 ;
}