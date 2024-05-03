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

    if(a<b)
    {
        if(a<c)
        {
            if(a<d)
            {
                printf("a is minimum:%d",a);
            }
            else
            {
                printf("d is minimum:%d",d);
            }
        }
          else
             {
        if(c<d)
        {
            printf("c is minimum:%d",c);
        }
        else
        {
            printf("d is minimum:%d",d);
        }
             }
    }
    else
    {
        if(b<c)
        {
            if(b<d)
            {
                printf("b is minimum:%d",b);
            }
            else
            {
                printf("d is minimum:%d",d);;
            }
        }
        else
        {
            if(c<d)
            {
                printf("c is minimum:%d",c);
            }
            else
            {
                printf("d is minimum:%d",d);
            }
        }
    }
  
}