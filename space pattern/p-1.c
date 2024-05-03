#include<stdio.h>
main(){

 for (int row = 1; row <= 5; row++)
 {
    for (int s = 4; s >= row; s--)
    {
        printf("_");
    }
    for (int col = row; col >= 1; col--)
    {
        printf("%d",col);
    }
    printf("\n");
 }
 
    
}