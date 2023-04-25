/******************************************************************************

Binary search using recursion...

Input:
4 
1 2 3 4 
3 

Output:
2 

*******************************************************************************/
#include <stdio.h>

int binary(int a[],int e,int i,int j){
    if(i>=j)
    return -1;
    int m=(i+j)/2;
    if(a[m]==e) return m;
    else if(a[m]>e) j=m;
    else i=m;
    return binary(a,e,i,j);
}

int main()
{
    int n,e;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&e);
    printf("%d",binary(a,e,0,n-1));
    return 0;
}

