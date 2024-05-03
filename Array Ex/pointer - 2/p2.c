#include<stdio.h>

swap(int *a,int *b,int *c){
    int temp =*a;
    *a=*c;
    *c=*b;
    *b=temp;
}
main(){
    int num1;
    int num2;
    int num3;

    printf("Enter a value of num1 :");
    scanf("%d",&num1);

    printf("Enter a value of num2 :");
    scanf("%d",&num2);

    printf("Enter a value of num3 :");
    scanf("%d",&num3);

    swap(&num1,&num2,&num3);

    printf("After swap : num1 =%d,num2 =%d,num3 =%d\n",num1,num2,num3);
}