#include<stdio.h>
main(){
    int karan[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter the value :");
        scanf("%d",&karan[i]);
    }

    int sum=0;
    for (int i = 0; i <= 4; i++)
    {
        sum+=karan[i];            
        
    }
            printf("SUM IS :%d\n",sum);
    
    
}