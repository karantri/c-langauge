#include<stdio.h>
 struct student{
 int id;
 char name[100];
 int age;
 char course[100];
 char city[100];
    int standard;    
 char school[100];
}s,s1,s2;

main(){
    

    s.id=1;
    strcpy(s.name,"karan");
    s.age=19;
     strcpy(s.course,"Full stack");
      strcpy(s.city,"rajkot");
        s.standard=11;
        strcpy(s.school,"RnW");

     s1.id=2;
    strcpy(s1.name,"Mitesh");
    s1.age=18;
     strcpy(s1.course,"Full stack");
      strcpy(s1.city,"rajkot");
        s1.standard=12;
        strcpy(s1.school,"RnW");

        
     s2.id=3;
    strcpy(s2.name,"Keval");
    s2.age=17;
     strcpy(s2.course,"Full stack");
      strcpy(s2.city,"rajkot");
        s2.standard=10;
        strcpy(s2.school,"RnW");

    printf(" ID :%d\nNAME : %s\nAGE : %d\n COURSE :%s\n CITY :%s\n STANDARD :%d\n SCHOOL :%s\n",s.id,s.name,s.age,s.course,s.city,s.standard,s.school);
    printf(" ID :%d\nNAME : %s\nAGE : %d\n COURSE :%s\n CITY :%s\n STANDARD :%d\n SCHOOL :%s\n",s1.id,s1.name,s1.age,s1.course,s1.city,s1.standard,s1.school);
    printf(" ID :%d\nNAME : %s\nAGE : %d\n COURSE :%s\n CITY :%s\n STANDARD :%d\n SCHOOL :%s\n",s2.id,s2.name,s2.age,s2.course,s2.city,s2.standard,s2.school);

}