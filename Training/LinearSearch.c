/******************************************************************************

print the index of negative integer Linear search using recursion...

Input:
7
3 0 -1 2 9 5 8 

Output:
2 

*******************************************************************************/

#include <stdio.h>

void input(int a[],int i,int n){
    if(i==n)
    return;
    scanf("%d",&a[i++]);
    input(a,i,n);
}

int search(int a[],int i,int n){
    if(i==n)
    return -1;
    if(a[i]<0)
    return i;
    return search(a,i+1,n);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    input(a,0,n);
    printf("%d",search(a,0,n));
    return 0;
}

