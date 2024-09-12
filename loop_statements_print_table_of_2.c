#include <stdio.h>

int main()
{
    printf("C Programming By Elevate Coders");
    
    // Loop Statements 
    
    // for loop 
    //  while loop 
    //  do while loop 
    
    // 2 * 1 = 2 
    // 2 * 2 = 4 
    //     i   2*i 
    
    for(int i=1;i<11;i++){
      printf("\n2 * %d = %d",i,2*i);
    }
    
    printf("\n\n*************************************\n");
    
    int i=1;
    while(i<11){
      printf("\n2 * %d = %d",i,2*i);
      i++;
    }
    
    printf("\n\n*************************************\n");
    
   i=1;
    do{
      printf("\n2 * %d = %d",i,2*i);
      i++;
    }while(i<11);
    
    
    
    
    
}
