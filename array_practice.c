#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    
    int max=a[0];
    int min=a[0];
    int evenCount=0;
    int oddCount=0;
    int sum=0;
    int average=0;
    
    for(int i=1;i<10;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    
    printf("\nLargest Number :- %d",max);
    
    for(int i=1;i<10;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    
    printf("\nSmallest Number :- %d",min);
    
    printf("\nEven Numbers :- ");
    for(int i=0;i<10;i++){
        if(a[i]%2==0){
            printf("%d ",a[i]);
            evenCount++;
        }
    }
    
    printf("\nOdd Numbers :- ");
    for(int i=0;i<10;i++){
        if(a[i]%2!=0){
            printf("%d ",a[i]);
            oddCount++;
        }
    }
    
    printf("\nEven Count :- %d",evenCount);
    printf("\nOdd Count :- %d",oddCount);
    
    for(int i=0;i<10;i++){
        sum+=a[i];
    }
    
    printf("\nSum :- %d",sum);
    printf("\nAverage :- %.1f",(float)sum/10);
    return 0;
}
