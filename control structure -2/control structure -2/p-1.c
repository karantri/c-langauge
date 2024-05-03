#include<stdio.h>
main(){
    int a,b,c;
    printf("Enter value of a:");
    scanf("%d",&a);
     printf("Enter value of b:");
    scanf("%d",&b);
     printf("Enter value of c:");
    scanf("%d",&c);

    if(a<b){
        if(a<c){
            printf("The minimum value is:%d",a);
        }
        else{
            printf("The minimum value is:%d",c);
        }
    }
    else{
        if(b<c){
            printf("The minimum value is:%d",b);
        }
        else{
            printf("The minimum value is:%d",c);
        }
    }
}