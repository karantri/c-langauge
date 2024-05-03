#include <stdio.h>



int main() {
    int x, y;
    int a;
    int b;
    x=*a;
    y=*b ;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);


    printf("\nBefore swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

   
    printf("%u",*x, *y);

   
    printf("\nAfter swapping:\n");
    printf("x: %d\n",*x);
    printf("y: %d\n",*y);

  
}
