/******************************************************************************

scanning and printing elements of the array...

Input:
4 
1 2 4 2 

Output:
1 2 4 2 

*******************************************************************************/

#include <stdio.h>

void scan(int a[],int i,int n){
    if(i<n){
        scanf("%d",&a[i]);
        scan(a,i+1,n);
    }
}

void print(int a[],int i,int n){
    if(i<n){
        printf("%d ",a[i]);
        print(a,i+1,n);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    scan(a,0,n);
    print(a,0,n);
    return 0;
}

