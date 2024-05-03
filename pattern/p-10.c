#include<stdio.h>
main(){
    int row , col;
    for (int row = 65; row <= 69; row++)
    {
        for (int  col = 65; col <= row; col++)
        {
            printf("%c",col);
        }
        printf("\n");
    }
    
}