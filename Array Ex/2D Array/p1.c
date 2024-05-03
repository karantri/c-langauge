#include<stdio.h>
main(){

    int a,b,n,sum=0;

    float avr;

    printf("Enter the array's row size:");
    scanf("%d",&a);

    printf("Enter the array's colum size:");
    scanf("%d",&b);

    int arr[a][b];
    n = a*b;
     
    

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
        printf("\n");
    }
    printf("%d\n :",sum);

    avr=sum/n;
    printf("%0.2f",avr);

    
    
    
}