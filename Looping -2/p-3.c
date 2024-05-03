#include<stdio.h>
main(){
    int i=1,a;
  scanf("%d",&a);

    do
    {
        if (i%2==0)
        {
        printf("even numbers :%d\n",i);

        }
        
        i++;
    } while (i<=a);
    
}