/******************************************************************************

Check whether the given number is armstrong or Not.

Input: 153

output: Yes

Input: 78 

output: No 

Input: 370

output: Yes

*******************************************************************************/

#include <stdio.h>

int power(int n,int l);
_Bool armstrong(int n);

_Bool armstrong(int n){
    char tem[101];
    int l=sprintf(tem, "%d",n);
    int s=0,t=n;
    while(t>0){
        s+=power(t%10,l);
        t/=10;
    }
    if(s==n) return 1;
    else return 0;
}

int power(int a,int l){
    int s=1;
    for(int i=0;i<l;i++) s*=a;
    return s;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(armstrong(n)) printf("Yes");
    else printf("No");
    return 0;
}
