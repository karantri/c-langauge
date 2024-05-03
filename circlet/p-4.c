#include<stdio.h>
main(){

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d",col);
        }
        for (int s = 4; s >= row; s--)
        {
            printf(" ");
        }
         for (int s = row; s <= 4; s++)
        {
            printf(" ");
        }
        for (int col = row; col >= 1; col--)
        {
            printf("%d",col);
        }
        
        
        printf("\n");
    }
    
}