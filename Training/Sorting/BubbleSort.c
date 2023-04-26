/******************************************************************************

BubbleSort Implementation.....

Input:
5
3 5 2 1 4 

Output:
1 2 3 4 5

Input:
8 
38 74 27 2 2 94 93 7 

Output:
2 2 7 27 38 74 93 94

*******************************************************************************/
#include <stdio.h>

void BubbleSort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                a[j]^=a[j+1];
                a[j+1]^=a[j];
                a[j]^=a[j+1];
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    BubbleSort(a,n);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}


