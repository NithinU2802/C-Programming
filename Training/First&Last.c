/******************************************************************************

First and last two digit number sum.

Input: 15643
output: 58

Input: 1123
output: 34

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,s=0,c=0,res=0;
    scanf("%d",&a);
    while(c<2){
        s=(s*10)+(a%10);
        a/=10;
        c++;
    }
   // printf("%d\n",s);
    int t=s,r=0;
    while(s>0){
        r=(r*10)+(s%10);
        s/=10;
    }
    res+=r;
    while(a>0){
        s=(s*10)+(a%10);
        a/=10;
    }
    a=0;
    c=0;
    while(c<2){
        a=(a*10)+(s%10);
        s/=10;
        c++;
    }
    res+=a;
    printf("%d",res);
}
