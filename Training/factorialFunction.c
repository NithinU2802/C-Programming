/******************************************************************************

print the factorial of starting....

Input:
3 2 
1 1 

output:
Total: 3

*******************************************************************************/

#include <stdio.h>

int fact(int a,int b){
    for(int i=1;i<=a;i++) b*=i;
    return b;
}

int main()
{
    int t,a,b,x,y;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&x,&y);
    t=fact(a,x)/fact(b,y);
    printf("Total: %d",t);
    return 0;
}

