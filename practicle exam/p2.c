#include<stdio.h>
main(){
    int arr[1];
    int min=100;

    for (int i = 0; i <= 4; i++)
    {
      printf("Enter the VAlue :");
      scanf("%d",&arr[i]);
    }
    
    for (int i = 1; i<= 4; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        

    }
        printf("\n");
        printf("Smallest Element :%d\n",min);

}