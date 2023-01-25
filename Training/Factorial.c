/******************************************************************************

Factorial of the given number.

Input: 5
output: 120

Input: 7
output: 5040

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,s=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) s*=i;
    printf("%d",s);
    return 0;
}
