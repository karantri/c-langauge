#include<stdio.h>

main(){

int a=10;
int *p1;
int **p2;
int ***p3;
int ****p4;

p1=&a;
p2=&p1;
p3=&p2;
p4=&p3;

printf("a=> %u %d\n",p1,*p1);
printf("a=> %u %u %d\n",p2,*p2,**p2);
printf("a=> %u %u %u %d\n",p3,*p3,**p3,***p3);
printf("a=> %u %u %u %u %d\n",p4,*p4,**p4,***p4,****p4);
}