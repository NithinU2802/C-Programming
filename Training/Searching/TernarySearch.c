/******************************************************************************

Ternary Search Implementation.....

Input:
5
3 5 2 1 4 
2 
Output:
2

Input:
8 
38 74 27 2 5 94 93 7 
2 

Output:
3 

*******************************************************************************/

#include <stdio.h>

int ternary(int a[],int k,int s,int e){
    while(s<e){
    int m1=s+(s-1)/3,m2=e-(e-1)/3;
    if(a[m1]==k) 
    return m1;
    else if(a[m2]==k)
    return m2;
    else if(k<m1)
    s=m1-1;
    else if(k>m2)
    e=m2+1;
    else{
       s=m1+1;
       e=m2-1;
    }
    }
    return -1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],k;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    printf("%d",ternary(a,k,0,n-1));
    return 0;
}
