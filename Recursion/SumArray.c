/******************************************************************************

Array of function implementation...

Input: 5
1 2 3 4 5
Output: 15

*******************************************************************************/
#include <stdio.h>

int sum(int a[],int n){
    if(n==-1)
    return 0;
    else return a[n]+sum(a,n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%d",sum(a,n-1));
    return 0;
}

