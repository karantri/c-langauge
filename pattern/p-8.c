#include<stdio.h>
main(){
        int row =5,n = 1,i,j;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j <= i; j++)
    {
        printf("%d",n++);
    }
    printf("\n");
}
}