#include<stdio.h>
main(){

    int a,b,sum=0;


    printf("Enter the array's row size:");
    scanf("%d",&a);

    printf("Enter the array's colum size:");
    scanf("%d",&b);

    int arr[a][b];
     
    

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter value :");
           scanf("%d",&arr[i][j]);
        }
    }

     for (int i = 0; i < a; i++)
    {
        
        for (int j = 0; j < b; j++)
        {
        sum+=arr[i][j];  

        }
    
        printf("%d",sum)
        printf("\n");
    }

    
    
}