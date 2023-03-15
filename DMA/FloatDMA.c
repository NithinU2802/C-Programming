/******************************************************************************

Float dynamic Memory Allocation.....

Input:
2 
1.0 9.7 

Output:
1.000000 9.700000

*******************************************************************************/
#include <stdio.h>
#include <malloc.h>

int main()
{
    int n;
    float *w;
    scanf("%d",&n);
    w=(float*)malloc(n*sizeof(float));
    for(int i=0;i<n;i++) scanf("%f",&w[i]);
    for(int i=0;i<n;i++) printf("%f ",w[i]);
    return 0;
}

