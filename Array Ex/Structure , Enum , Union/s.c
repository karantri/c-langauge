#include<stdio.h>
 struct student{
 int id;
 float pers;
 int age;
}

main(){
    struct student s;

    s.id=1;
    s.pers=90.99;
    s.age=80;

    printf(" ID :%d\nPERSENTAGE : %f\nAGE : %d",s.id,s.pers,s.age);
}