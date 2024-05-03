#include<stdio.h>
main(){
    int count = 0;
    int num = 1;

    while(count <=80){
        if (num %8==0){
            printf("%d\n",num);
            count++;
        }
        if (count==5){
            break;
        }
        num++;

    }
}