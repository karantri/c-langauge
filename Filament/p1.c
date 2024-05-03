#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000]="nayan";  

    char s1[100]="hello";
    
    printf("Enter  the string : ");
    gets(s);



if((strcmp(s,s1)==0)){
      printf("Given string is not a Palindrome.");
}else{
  
    printf("Given string is a Palindrome.");
}
}