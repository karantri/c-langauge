#include<stdio.h>

 
 int *min(int *n1,int *n2){
    if(*n1<*n2){
        return n1;
    }else{
        return n2;
    }
 }
 main(){

        int a =10 ;
        int b = 20;
        
        printf("%d is min",*min(&a,&b));
 }