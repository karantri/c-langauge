#include<stdio.h>
main()
{
   for (int i = 1; i < 30; i++)
   {
    if(i %3 ==0 && i % 5==0){
        printf("Fizz Buzz\n");
    }
    if(i % 3==0){
        printf("Fizz\n");
        continue;
    }
    if(i % 5==0){
        printf("Buzz\n");
        continue;
    }printf("%d\n",i);
   }
   
    
}