/******************************************************************************

Dynamic Memory Allocation implementation....

Input:
4
4 5 6 7

Output:
4
1 2 3 4 

It can hold maximum size of dynamic array as 16 elements....

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    int n;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}

