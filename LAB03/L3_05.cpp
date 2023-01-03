#include <stdio.h>
#include <string.h>
struct watch{
    char brand[20];
    char model[20];
    char release[20];
};
void InsertWatch(struct watch *wa);

int main(){
    struct watch wi;
    InsertWatch(&wi);
    printf("%s is a high quality watch", wi.brand);
    printf("with the %s model being the bast seller", wi.model);
    printf("open for sale date %s", wi.release);
}
void InsertWatch(struct watch *wa){
    printf("Barnd :");
    get_s(wa->brand);
    printf("model :");
    get_s(wa->model);
    printf("release :");
    scanf("%s", wa->release);
}