#include<stdio.h>
main(){
    int arr1[5]={7,4,9,5,2};
    int arr2[3]={1,3,6};

    int maxsize=arr1[5],arr2[3];

    int arr3[maxsize];

    int size1 = 5;
    int size2 = 3;
    int size3 = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter First size of array :");
    }
    
    for (int i = 0; i < 4; i++)
    {
        printf("Enter Element of array :");
        arr3[i]=arr1[i];
        size3++;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("Enter second size of array :");
    }
    
    for (int i = 0; i < 4; i++)
    {
        printf("Enter Element of array :");
        arr3[size3]=arr2[i];
        size3++;
    }

    for (int i = 0; i < size3; i++)
    {
       printf("%d",arr3[i]);
    }

    
    
}