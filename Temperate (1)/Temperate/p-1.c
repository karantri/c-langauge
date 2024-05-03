#include<stdio.h>  
int main()  
{  
    int num, a, b = 1;  
  
    printf("This is Factorial\n",a);  
    scanf("%d", &num);  
  
    for(a = 1; a <= num; a++)  
    {  
        b = b * a;  
    }  
  
    printf("Factorial of %d is %d\n", num, b);  
  
}  