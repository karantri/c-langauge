#include<stdio.h>

main()
{
	int box[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("enter the value :");
        scanf("%d",&box[i]);
    }

    for (int i = 4; i >= 0; i--)
    {
        if (box[i] % 2!=0)
        {
            printf("%d\n",box[i]);
        }
        
    }
    
    
}