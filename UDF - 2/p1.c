#include<stdio.h>

int sum1(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
main(){

int size;

printf("enter size of array :");
scanf("%d",&size);

int arr[size];

for(int i=0;i<size;i++){
    printf("enter the value :");
    scanf("%d",&arr[i]);
}

int sum =sum1(arr,size);

printf("ans is :%d",sum);
}