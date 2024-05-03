#include<stdio.h>
main(){
    int i =1;
    while (i<=60)
    {
      if (i % 6 ==0)
        {
          i++;
          continue;
        }
      
      printf("%d\n",i);
      i++;
    }
    
    }