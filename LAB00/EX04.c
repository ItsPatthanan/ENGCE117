#include <stdio.h>
int main(){
int score1=0,score2=0, score3=0, sum_s=0;
do{
printf("enter the classroom\n");
printf("keep score for admission\n");
scanf("%d", &score1);
printf("submit work\n");
printf("assignments points\n");
scanf("%d", &score2);
printf("final exam\n");
printf("collect final exam scores\n");
scanf("%d", &score3);
sum_s score1+ score2+ score3;
}while(sum_s < 80);
printf("get A grade");
return 0;
}