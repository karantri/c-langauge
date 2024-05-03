#include<stdio.h>
main(){
    int a =1 ;
    do{
        if (a== 14){
            a++;
            continue;
        }
        if (a % 2==0)
        {
            printf("%d\n",a);
        }
        a++;
    }
    while (a <=30);
}