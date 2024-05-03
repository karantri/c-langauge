#include<stdio.h>
 union student{
 int id;
 
 int age;
}

main(){
    union student s;

    s.id=1;
    s.age=80;

    printf(" ID :%d\nAGE : %d",s.id,s.age);
}