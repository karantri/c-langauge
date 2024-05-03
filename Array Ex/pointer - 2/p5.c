#include<stdio.h>

main(){

int a=10;
int *p1;
int **p2;
int ***p3;

p1=&a;
p2=&p1;
p3=&p2;

printf("a=> %u %d",p1,*p1);
printf("a=> %u %d",p2,*p2,**p2);
printf("a=> %u %u %d",p3,*p3,**p3,***p3);
}