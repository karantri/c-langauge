#include<stdio.h>
main(){
    int num;
    int first = 0;
    int second = 1;
    int next;

    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        next= first+second;
        printf("%d\n",next);
        first = second;
        second = next;
    }
    
}