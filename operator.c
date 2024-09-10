#include <stdio.h>

int main()
{
    // Operator :- It is just a symbol or sign which perform some predefined action or task.
    
    int n1=10;
    int n2=20;
    
    // Types of Operators :- 
    // (1) Arithmetic Operator ( +,-,*,/,% )
    
    printf("%d",n1+n2);
    printf("\n%d",n1-n2);
    printf("\n%d",n1*n2);
    printf("\n%d",n1/n2);
    printf("\n%d",n1%n2);
    
    // (2) Assignment Operator ( +=,-=,*=,/=,%= )
    
    n1+=n2; // n1=n1+n2=10+20=30 n1=30 n2=20 
    n1-=n2; // n1=n1-n2=30-20=10 n1=10 n2=20 
    n1*=n2; // n1=n1*n2=10*20=200 n1=200 n2=20 
    n1/=n2; // n1=n1/n2=200/20=10 n1=10 n2=20 
    n1%=n2; // n1=n1%n2=10%20=10 n1=10 n2=20 
    
    printf("\n\nn1 :- %d and n2 :- %d",n1,n2);
    
    // (3) Relational Operator / Comparision Operator ( <,<=,>,>=,==,!= )
    
    printf("\n\n%d",n1<n2);
    printf("\n%d",n1<=n2);
    printf("\n%d",n1>n2);
    printf("\n%d",n1>=n2);
    printf("\n%d",n1==n2);
    printf("\n%d",n1!=n2);
    
    // (4) Logical Operator ( &&, ||, ! )
    
    printf("\n\n%d",(n1==100) && (n2==200));
    printf("\n%d",(n1==10) && (n2==200));
    printf("\n%d",(n1==10) && (n2==20));
    
    printf("\n\n%d",(n1==100) || (n2==200));
    printf("\n%d",(n1==10) || (n2==200));
    printf("\n%d",(n1==10) || (n2==20));
    
    printf("\n\n%d",!((n1==100) || (n2==200)));
    
    return 0;
}
