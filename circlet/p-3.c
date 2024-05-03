#include<stdio.h>
main(){
    int n=5;
    for (int row = 1; row <=n; row++)
    {
        for (int s = 1; s <= row; s++)
        {
            printf(" ");
        }
        for (int col = 5; col >= row; col--)
        {
            printf("%d ",col%2);
        }
        printf("\n");
        
    }
    
}