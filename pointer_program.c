#include <stdio.h>

int main()
{
    printf("C Programming");
    
    // Pointer :- It is a special type of variable which store the address of another variable.
    
    int a=10; // 101 a = 10 
    
    int *p; // 102 *p = 101 
    
    p=&a;
    
    printf("\nThe value of a :- %d",a);
    printf("\nThe value of a :- %d",*p);
    
    printf("\nThe address of a :- %d",&a);
    printf("\nThe address of a :- %d",p);
    
    printf("\nThe address of p :- %d",&p);

    *p=55;
    
    printf("\nThe value of a :- %d",a);
    printf("\nThe value of a :- %d",*p);
    
    return 0;
}
