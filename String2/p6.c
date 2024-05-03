#include<stdio.h>
main(){
     
     char firststring[100]="karan";

     char secondstring[100];

     printf("enter your first string");
     gets("firststring");


     printf("enter your second string");
     gets("secondstring");

     if (strcmp(firststring,secondstring)==0)
     {
        printf("string is equal");
     }else{
        printf("string is not equal");

     }
     
}