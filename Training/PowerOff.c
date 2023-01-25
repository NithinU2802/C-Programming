/******************************************************************************

Power operation using given numbers.

Input: 2 3 
output: 8 

Input: 5 2 
output: 25

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,s=1;
    scanf("%d %d",&a,&b);
    for(int i=0;i<b;i++) s*=a;
    printf("%d",s);
}
