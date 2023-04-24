/******************************************************************************

print the series of fibonacci series...

Input: 5
Output: 0 1 1 2 3 

Input: 10
Output: 0 1 1 2 3 5 8 13 21 34

*******************************************************************************/

#include <stdio.h>

int fib(int n){
    if(n==0 || n==1)
    return n;
    else return fib(n-1)+fib(n-2);
}


int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=0;
    for(int i=0;i<n;i++)
    printf("%d ",fib(i));
    return 0;
}

