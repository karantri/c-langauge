#include<stdio.h>
 struct student{
 int id;
 char name[100];
 int age;
 char course[100];
 char city[100];
    int standard;    
 char school[100];
}s;
main(){
      struct student s[100];
    int n;
   

     printf("ENTER THE NUMBERS OF STUDENTS :\n");
     scanf("%d",&n);

     for (int i = 0; i < n; i++)
     {
        printf("Enter ID :\n");
        scanf("%d",&s[i].id);

        printf("Enter NAME:\n");
        scanf("%s",&s[i].id);

        printf("Enter AGE :\n");
        scanf("%d",&s[i].id);

        printf("Enter COURSE :\n");
        scanf("%s",&s[i].id);

        printf("Enter CITY :\n");
        scanf("%s",&s[i].id);

        printf("Enter STANDARD :\n");
        scanf("%d",&s[i].id);

        printf("Enter SCHOOL :\n");
        scanf("%s",&s[i].id);
     }
     for (int i = 0; i < n; i++)
     {
        printf(" ID :%d\nNAME : %s\nAGE : %d\n COURSE :%s\n CITY :%s\n STANDARD :%d\n SCHOOL :%s\n",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].standard,s[i].school);
     }
     
}