/******************************************************************************

First N fibonaccis series.

Input: 5

Output: 1 1 2 3 5 8 

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a=1,b=1;
    printf("%d ",b);
    while(c<=n-2){
        int t=a;
        printf("%d ", b);
        c++;
        a=b;
        b+=t;
    }
    return 0;
}
