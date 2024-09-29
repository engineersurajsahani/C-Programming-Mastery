#include <stdio.h>

int main()
{
    // Array 
    
    // (1) It is like a container in which we can store multiple data.
    // (2) Data must be of the same type.
    // (3) Size is fixed.
    // (4) Data is store in continous memory blocks.
    // (5) The index start from 0 to n-1.
    
    int a[]={1,2,3,4,5,6,7,8,9,10};
    
    // a[1]=10;
    // a[3]=20;
    
    for(int i=0;i<10;i++){
         printf("%d ",a[i]);
    }
    
    printf("\n\n");
    
    int b[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    // b[2][2]=22;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
