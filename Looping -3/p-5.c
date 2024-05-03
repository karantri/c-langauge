#include<stdio.h>
main(){
    
    int sum=0;

    for (int i = 0; i <= 10; i++)
    {
        sum+=i;
        if(sum>=50){
            break;
        }
        printf("%d\n",sum);
    }
    
    
}