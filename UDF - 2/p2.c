#include <stdio.h>

int calculatelength(char str[]){
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    return length;
}
int main() {
    
    char str[1000];
    
    printf("enter string :\n");
    scanf("%s",str);
    
    int length=calculatelength(str);
    
    printf("%d",length);
   
}