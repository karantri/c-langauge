#include<stdio.h>
main()
{
   for (int i = 1; i < 30; i++)
   {
    
    if(i % 8==0){
        printf("Eight\n");
        continue;
    }
    if(i % 2==0){
        printf("Two\n");
        continue;
    }printf("%d\n",i);
   }
   
    
}