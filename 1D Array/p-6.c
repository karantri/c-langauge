#include <stdio.h>

int main() {
    int arr1[5];
    int arr2[5];
    
    int i,j;
    for(i=0;i<=4;i++)
    {
        printf("Enter array1 value = ");
        scanf("%d",&arr1[i]);
    }
      for(i=0;i<=4;i++)
    {
        printf("Enter array2 value = ");
        scanf("%d",&arr2[i]);
    }
    
    for(i=0;i<=4;i++)
    {
        printf("%d\n",arr1[i]+arr2[i]);
    }
}