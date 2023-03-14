/******************************************************************************

Array implementation using pointers......

Output: 
56

print element in order to maintain address...

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[3],*t;
    a[0]=50;
    a[1]=25;
    a[2]=56;
    t=&a[0];
    printf("%d\n",t[2]);
    return 0;
}

