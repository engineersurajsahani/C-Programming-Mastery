#include <stdio.h>

int main()
{
    // Factorial of a number 
    
    // 5!=1*2*3*4*5
    
    // 6!=1*2*3*4*5*6
    
    printf("Enter a number :- "); 
    
    int n=0;
    
    scanf("%d",&n); // n=5
    
    int result=1;
    
    for(int i=1;i<=n;i++){
        result=result*i; // result=1*1*2*3*4*5;
    }
    
    printf("\nFactorial of %d is :- %d",n,result);
    

    return 0;
}
