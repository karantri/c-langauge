#include<stdio.h>
main(){
    int arr[4];
    int max=0;

    for (int i = 0; i <= 4; i++)
    {
      printf("Enter the VAlue :");
      scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i<= 4; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        

    }
        printf("\n");
        printf("MAximum value :%d\n",max);

}