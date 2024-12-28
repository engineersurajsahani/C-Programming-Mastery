#include <stdio.h>

int main()
{
    FILE *f;
    
    f=fopen("a.txt","a");
    
    if(f==NULL){
        printf("File does not opened!!!");
        return 0;
    }
    
    fprintf(f,"C++ Programming Mastery");
    
    fclose(f);
    
    f=fopen("a.txt","r");
    
    if(f==NULL){
        printf("File does not opened!!!");
        return 0;
    }
    
    char data[100];
    
    while(fgets(data,sizeof(data),f)!=NULL){
        printf("%s",data);
    }
    
    fclose(f);
    

    return 0;
}
