#include<stdio.h>

main(){
    FILE *p;
    p = fopen("write.txt","a");

    if ( p ==NULL)
    {
        printf("Error|n");
    }
    
    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 ==0 && i % 5 ==0)
        {
            printf("%d\n",i);
        }
        
    }
    fclose(p);
    printf("Number  write to file succesfully\n");
    
}