#include <stdio.h>

int main()
{
    // Fibonacci Series
    
    // 1 1 2 3 5 8 ....
    //   f s t 
    //      f s t
    
    printf("Enter a range :- ");
    
    int n=0;
    
    scanf("%d",&n);
    
    printf("\n\nFibonacci Series upto range %d :- ",n);
    
    printf("1 1 ");
    
    int first=1;
    
    int second=1;
    
    for(int i=3;i<=n;i++){
        int third=first+second;
        printf("%d ",third);
        first=second;
        second=third;
    }
    
    return 0;
}
