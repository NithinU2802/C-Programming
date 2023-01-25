/******************************************************************************

print largest number among three numbers.

Input: 45 36 12
output: 45

Input: 18 24 65
output: 65

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a<c) printf("%d",c);
        else printf("%d",a);
    }else if(b>c) printf("%d",b);
    else printf("%d",c);
}
