#include<stdio.h>
main(){
    FILE *p;
    char data[100];

    p = fopen("read.txt","r");

    if(p == NULL){
        printf(" could not open file !");

    }
    else{
        printf("file Read\n");
        while (fgets(data,50,p) !=NULL)
        {
            printf("%s",data);
        }
        
    }

    fclose(p);

    p = fopen("write.txt","w");

    if(p == NULL){
        printf("File could not open !");
    }
    else{
        printf("\nfile write open");
        fputs(data,p);
        fclose(p);
    }
}