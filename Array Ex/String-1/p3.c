#include<stdio.h>
main(){
    char name[]="HelLo worLD";
    
    
    for (int i = 0; name[i] !='\0'; i++)
    {
        if (name[i] >='a'&& name[i] <='z')
        {
            name[i]-=32;
        }
        else if (name[i] >='A'&& name[i] <='Z')
        {
           name[i]+=32;
        }
        
    }
    printf("%s",name);
    

}