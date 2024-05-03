#include<stdio.h>
main(){
    int a;
     printf("enter value of a:");
     scanf("%d",&a);

     if(a<0){
        printf("Negative");
    }else if(a>0)
    {
        printf("Positive");
    }
    
    else{
        printf("Neutral");
    }
}