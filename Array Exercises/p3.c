#include<stdio.h>
main(){
int arr[5];

for (int i = 0; i <= 4; i++)
{
    printf("Enter the value :");
    scanf("%d",&arr[i]);

}

for (int i = 4; i >= 0; i--)
{
printf("%d\n",arr[i]);
    
}
}