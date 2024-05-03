#include<stdio.h>
main(){
    int num;


    scanf("%d",&num);

    for (int i = 0; i <= num; i+3)
    {
        printf("%d%d",num,i+3);
        
    }
    
}