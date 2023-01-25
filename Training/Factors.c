/******************************************************************************

print all factors and their sum 

Input: 12

Output: 1 2 3 4 6 12 28

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int a[n],k=0,s=0;
   for(int i=1;i<=n;i++)
   if(n%i==0){ a[k++]=i; s+=i; }
   
   for(int i=0;i<k;i++) printf("%d ",a[i]);
   printf("%d",s);
    return 0;
}

