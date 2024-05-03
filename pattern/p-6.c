#include<stdio.h>
main(){
      int row,col;
for (int row = 4; row >= 1; row--)
{
    for (int col = 4; col >= row; col--)
    {
        printf("%d",row);
    }
    printf("\n");
}
}