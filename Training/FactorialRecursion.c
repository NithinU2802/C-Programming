/******************************************************************************

Factorial using recursion....

Input: 5
Output: 120

Input: 4 
Output: 24

*******************************************************************************/

#include <stdio.h>

int fact(int n)
{
    if(n<1) return 1;
    return n*fact(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
    
}



