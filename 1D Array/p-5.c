#include<stdio.h>

main()
{
	int box[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("enter the value :");
        scanf("%d",&box[i]);
    }

   int product = 1;

    for (int i = 0; i <= 4; i++)
    {
          product*=box[i];   
        if (box[i] % 2==0)
        {
            printf("%d\n",product);
        }
        
    }
    
    
}