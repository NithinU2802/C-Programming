/******************************************************************************

Input:
10

Ouput:
10 15 20

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int *p, **q;
    p=&a;
    q=&p;
    printf("%d ", a);
    *p=15;
    printf("%d ", a);
    **q=20;
    printf("%d ", a);
    return 0;
}

