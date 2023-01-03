#include <stdio.h>
#include <string.h>

struct ItMe
{
    char name[20];
    int age;
    char sex;
    int salary;
};
typedef struct ItMe me;
void show(struct ItMe *status);

int main(){
    me m;
    strcpy(m.name,"Patthanan");
    show(&m);
    printf("Name: %s \nAge: %d \nSex: %c \nSalary: %d",m.name, m.age, m.sex, m.salary);
    return 0 ;
}
void show(struct ItMe *status){
    status->age = 22;
    status->sex = 'M';
    status->salary = 50000;
}