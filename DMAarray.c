/******************************************************************************

An Array with dynamic Memory Allocation....

Input:
1 2 3 

Output:
1 2 3

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *r;
    r=(int*)malloc(3*sizeof(int));
    for(int i=0;i<3;i++) scanf("%d",&r[i]);
    for(int i=0;i<3;i++) printf("%d ",r[i]);
    return 0;
}

