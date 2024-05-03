#include<stdio.h>
main(){
    int arr[4];
    int min;

    for (int i = 0; i <= 4; i++)
    {
      printf("Enter the VAlue :");
      scanf("%d",&arr[i]);
    }
     
     min=arr[0];
    for (int i = 1; i<= 4; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        

    }
        printf("\n");
        printf("minimum value :%d\n",min);

}