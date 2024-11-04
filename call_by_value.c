#include <stdio.h>

void swap(int a,int b){
    
    printf("\nThe Address of a :- %d",&a);
    printf("\nThe Address of b :- %d",&b);
    
    int c=a;
    a=b;
    b=c;
}

int main()
{
    
    // Call By Value
    
    int a=10;
    
    int b=20;
    
    printf("\nThe Value of a :- %d",a);
    printf("\nThe Value of b :- %d",b);
    
    printf("\nThe Address of a :- %d",&a);
    printf("\nThe Address of b :- %d",&b);
    
    swap(a,b);
    
    printf("\nThe Value of a :- %d",a);
    printf("\nThe Value of b :- %d",b);
    
    return 0;
}
