#include <stdio.h>

// Function without parameter and without return type 

void hello(){
    printf("Hello\n");
}

// Function with parameter and without return type 

void add(int a,int b){
    printf("\nAddition of a and b :- %d",a+b);
}

// Function without parameter and with return type 

int data(){
    return 5;
}

// Function with parameter and with return type 

int sum(int a,int b,int c){
    return a+b+c;
}

int main()
{
    hello();
    hello();
    hello();
    
    add(4,5);
    add(5,5);
    
    int a=data();
    printf("\nValue of a :- %d",a);
    
    int result=sum(4,5,6);
    printf("\nValue of result :- %d",result);

    return 0;
}
