/******************************************************************************

Here the below program can take Input of 

*******************************************************************************/

// Here the below program can take Input of 16 elements...

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    a=(int*)malloc(sizeof(int)); // can hold value of 16
    for(int i=0;i<17;i++) scanf("%d",&a[i]);
    for(int i=0;i<17;i++) printf("%d ",a[i]);
    return 0;
}

