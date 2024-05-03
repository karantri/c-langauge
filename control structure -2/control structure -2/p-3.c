#include<stdio.h>
main(){
    int a,b,c,d;
    printf("Enter value of a:");
    scanf("%d",&a);
     printf("Enter value of b:");
    scanf("%d",&b);
     printf("Enter value of c:");
    scanf("%d",&c);
     printf("Enter value of d:");
    scanf("%d",&d);

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("a is maximum:%d",a);
            }
            else
            {
                printf("d is maximum:%d",d);
            }
        }
          else
             {
        if(c>d)
        {
            printf("c is maximum:%d",c);
        }
        else
        {
            printf("d is maximum:%d",d);
        }
             }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("b is maximum:%d",b);
            }
            else
            {
                printf("d is maximum:%d",d);;
            }
        }
        else
        {
            if(c>d)
            {
                printf("c is maximum:%d",c);
            }
            else
            {
                printf("d is maximum:%d",d);
            }
        }
    }
  
}