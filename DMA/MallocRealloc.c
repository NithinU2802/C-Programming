/******************************************************************************

Allocate and Reallocation of Memory dynamically...

Output:
5 7 10 11 66 10

Note: It can be calculate in different order where Refer running 
the program dynamically....

*******************************************************************************/

#include <stdio.h>
#include <malloc.h>

int main()
{
    int *f;
    f=(int*)malloc(3*sizeof(int));
    f[0]=5;
    f[1]=7;
    f[2]=10;
   f=realloc(f,3*sizeof(int));
    f[3]=11;
    f[4]=66;
    f[5]=10;
    for(int i=0;i<6;i++) printf("%d ",f[i]);
    return 0;
}

