/******************************************************************************

Check whether the given number is palindrome or not 

Input: 121
output: Yes

Input: 73
output: No

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int t=n,s=0;
    while(t>0){
        s=(s*10)+(t%10);
        t/=10;
    }
    if(n==s) printf("Yes");
    else printf("No");
}
