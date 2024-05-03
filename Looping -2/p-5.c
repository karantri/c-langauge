#include<stdio.h>  
int main()  
{  
    int num, a, b = 1;  
  
    printf("Enter a number to find its Factorial\n");  
    scanf("%d", &num);  
  
    for(a = 1; a <= num; a++)  
    {  
        b = b * a;  
    }  
  
    printf("Factorial of %d is %d\n", num, b);  
  
}  