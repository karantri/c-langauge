#include<stdio.h>
main(){
   int a;
     printf("enter age of a:");
     scanf("%d",&a);

     if(a<18){
        printf("You cannot vote");
    }else if(a=18)
    {
        printf("you can also vote");
    }
    else if(a>18)
    {
        printf("you can vote");
    }
}