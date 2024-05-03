#include<stdio.h>
main(){
    int a,b,c,d,min;
    printf("Enter Value Of A :");
    scanf("%d",&a);
    printf("Enter Value Of B :");
    scanf("%d",&b);
    printf("Enter Value Of C :");
    scanf("%d",&c);
    printf("Enter Value Of D :");
    scanf("%d",&d);
    
    min=(a<b && a<c && a<d)?a:(b<c && b<d)?b:(c<d)?c:d;
    printf("The minimum value is: %d",min);
}