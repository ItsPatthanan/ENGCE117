#include <stdio.h>
#include <string.h>

struct ItMe
{
    char name[20];
    int age;
    char sex;
    int salary;
};

void show(struct ItMe status);

int main(){
    struct ItMe _m;
    strcpy(_m.name,"Patthanan");
    _m.age = 25;
    _m.sex = 'M';
    _m.salary = 75000;
    show(_m);
    return 0 ;
}
void show(struct ItMe status){
 printf("Name: %s \n",status.name);
    printf("Age: %d \n",status.age);
    printf("Sex: %c \n",status.sex);
    printf("Salary: %d\n",status.salary);
}

   