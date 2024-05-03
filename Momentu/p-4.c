#include<stdio.h>
main(){
    int a;
    printf(" Choose your coffee : \n,");
    printf("1. Espresso -2.50$\n");
    printf("2.  Latte - $3.00\n");
    printf("3. Cappuccino - $3.50\n");
    printf("4. Americano - $2.75\n");
    scanf("%d",&a);
    switch(a){
        case 1: printf("1. Espresso -2.50$\n");
        break;

        case 2: printf("2.  Latte - $3.00\n");
        break;
        
        case 3: printf("3. Cappuccino - $3.50\n");
        break;
        
        case 4: printf("4. Americano - $2.75\n");
        break;
        
        default : printf(" DEKH KE TYPE KIJYE MAM !....THIK HAI..-");
    }
}