#include <stdio.h>
#include <string.h>
struct collector {
    char name[20];
    int watch;
};

struct collector findwatch(struct collector people[], int count);

int main() {
    struct collector people[4];
    strcpy (people[0].name, "nut");
    people[0].watch = 8;
    for( int i = 1 ; i < 4 ; i++ ){
        printf("Collector %d : name, watch : ", i);
        scanf("%s %d", people[i].name, 
                        &people[i].watch);
    }

    struct collector mostwatch;
    mostwatch = findwatch( people, 4 );
    printf("largest collection of watches : %s %d", mostwatch.name, mostwatch.watch);
    return 0;
}

struct collector findwatch(struct collector people[], int count) {
    int maxwatch, max_I;
    maxwatch = people[0].watch;
    max_I = 0;
    for ( int i = 1 ; i < count ; i++ ){
        if ( people[i].watch > maxwatch ){
            maxwatch = people[i].watch;
            max_I = i;
        }
    }
    return people[max_I];
}
