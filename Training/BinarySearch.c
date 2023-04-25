/******************************************************************************

Binary search implementation for the given array...

Input:
1 2 3 4
3 

Output:
2 

*******************************************************************************/
#include <stdio.h>

int binary(int a[],int e,int n){
    int i=0,j=n-1,m=0;
    while(i<j){
        m=(i+j)/2;
        if(a[m]==e)
        return m;
        else if(a[m]>e)
        j=m;
        else i=m; 
    }
    return -1;
}

int main()
{
    int n,e;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&e);
    printf("%d",binary(a,e,n));
    return 0;
}

