#include<stdio.h>
main(){
    int arr[6];

    for (int i = 0; i <= 5; i++)
    {
        for (int i = 2020; i <= 2040; i++)
        {
            if (arr[i] % 4==0)
            {
                printf("That is Leap year :%d",arr[i]);
            }
            
        }
        printf("\n");
    }
    
}