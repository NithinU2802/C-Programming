/******************************************************************************

Perfect Number for the given Input.

Input: 6 

Output: True 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int s=0;
    for(int i=1;i<n;i++) if(n%i==0) s+=i;
    if(s==n) printf("True");
    else printf("False");
    return 0;
}

