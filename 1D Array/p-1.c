#include<stdio.h>
main(){
    int karan[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter the value :");
        scanf("%d",&karan[i]);
    }

    for (int i = 4; i >= 0; i--)
    {
            printf("%d\n",karan[i]);
            
        
    }
    
    
}