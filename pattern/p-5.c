#include<stdio.h>
main(){
    int row,col;
for (int row = 1; row <= 10; row++)
{
    for (int col = 10; col >= row; col--)
    {
        printf("%d",col);
    }
    printf("\n");
}
}