#include<stdio.h>
main(){
    int row , col;
    for (int row = 70; row >= 65; row--)
    {
        for (int  col = row; col >= 65; col--)
        {
            printf("%c",col);
        }
        printf("\n");
    }
    
}