#include <stdio.h>
#include <string.h>

union Student{
    int id;  
    char email[100]; 
};

int main()
{
    printf("C Programming");
    
    union Student amit; 
    union Student rahul;
    
    amit.id=1; 
    strcpy(amit.email,"amit@gmail.com"); // 100 
    
    strcpy(rahul.email,"rahul@gmail.com"); 
    rahul.id=2; // 10 
    
    printf("\n\nId :- %d and Email :- %s",amit.id,amit.email);
    printf("\n\nId :- %d and Email :- %s",rahul.id,rahul.email);
    
    return 0;
}
